# benchmarks-include-C-

Esta librería te permitará hacer pruebas de ejecución de una forma más reducida, sin la necesidad de escribir tanto código por así decirlo.
**Este include es para C/C++**

## Instalación

Sólo debes incluir `benchmarks.h` al principio del código fuente del programa.

- Para incluirlo así debes tener `benchmarks.h` dentro de la carpeta **include** (la que viene por defecto en el IDE).
```C++
#include <benchmarks.h>
```
- Otra forma de incluir `benchmarks.h` es agregarlo dentro del directorio dónde está el programa.
```C++
#include "benchmarks.h"
```
- Sí quieres cambiar la veces que se ejecutará el código que esté dentro de `bm(n_iterate, n_time)` debes hacer esto:
```C++
#include "benchmarks.h"
#undef MAX_TIME
#define MAX_TIME (100000000)
```

## Uso

En este ejemplo haremos una prueba de rendimiento a ver cual es más rápido en tiempo de ejecución, punteros o variables primitivas.
```C++
#include <stdio.h>
#include <stdlib.h>
#include "benchmarks.h" //Estoy asumiendo que el archivo benchmarks.h está en la carpeta donde esté el programa.

int main()
{
	bm(i,time)
	{
		int a = 0;
		a = 8;
	}
	printf("DEBUG: Primitivas: %f segundos\n", GetTotalS(time));
	bm(i,time2)
	{
		int a = 0;
		int *pa = &a;
		*pa = 1;
	}
	printf("DEBUG: Punteros: %f segundos\n", GetTotalS(time2));
	system("pause");
	return 0;
}
```

## Resultados

**Prueba 1:**
- Primitivas: 3.54 s
- Punteros: 4.68 s

**Prueba 2:**
- Primitivas: 3.27 s
- Punteros: 4.32 s

**Prueba 3:**
- Primitivas: 3.69 s
- Punteros: 4.74 s

Según el benchmarks, las variables primitivas son más rápidas que los punteros; aunque la diferencia es muy mínima.

Sí quieres que el resultado sea en milisegundos, deberás usar la macro `GetTotalMS`
```C++
printf("DEBUG: Primitivas: %d ms", GetTotalMS time);
printf("DEBUG: Punteros: %d ms", GetTotalMS time2);
```

## Créditos

- [MrDave](https://github.com/MrDave1999)
- ANSI C por la librería `time.h`
