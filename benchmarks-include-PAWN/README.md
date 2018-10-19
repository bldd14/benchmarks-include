# benchmarks-include-PAWN

Este include te permitará hacer una prueba de rendimiento de manera simplificada y sencilla.

## Instalación

Usted deberá incluir el fichero `benchmarks.inc` en el directorio /pawno/include/
```pawn
#include <a_samp>
#include <benchmarks>
```
También puedes cambiar la cantidad de repeticiones que hará `bm(i,time)`
```pawn
#include <benchmarks>
#undef MAX_TIME
#define MAX_TIME (10000)
```

## Uso

¿Cuál sería más rápido? ¿Las variables primitivas o los arrays?

```pawn
#include <a_samp>
#include <benchmarks>

main()
{
	new array[3];
	new var1;
	new var2;
	new var3;
	bm(i,time)
	{
		array[0] = 9;
		array[1] = 10;
		array[2] = 11;
	}
	printf("DEBUG: Arrays: %f segundos", GetTotalS time);

	bm(i,time2)
	{
		var1 = 9;
		var2 = 10;
		var3 = 11;
	}
	printf("DEBUG: Variable: %f segundos", GetTotalS time2);
}
```

## Resultados

**Prueba 1:**
- Arrays: 1.64 s
- Variable: 1.27 s

**Prueba 2:**
- Arrays: 1.63 s
- Variable: 1.29 s

**Prueba 3:**
- Arrays: 1.629 s
- Variable: 1.262 s

Efectivamente, las variables individuales son más rápidas que los arrays.

Sí quieres que el resultado sea en milisegundos, deberás usar la macro `GetTotalMS`
```pawn
printf("DEBUG: Arrays: %d ms", GetTotalMS time);
printf("DEBUG: Variable: %d ms", GetTotalMS time2);
```

## Créditos

- [MrDave](https:www.github.com/MrDave1999)
- SA-MP Team
- [CompuPhase](https://www.compuphase.com/pawn/pawn.htm)
