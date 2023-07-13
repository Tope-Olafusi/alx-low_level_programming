#include "holberton.h"
#include <stdlib.h>
char *str_concat(char *s1, char *s2)
{
	int size; /* Tamaño del string*/
	int size2; /* Tamañano del segundo string */
	int i, j; /* Iteradores de bucle */
	char *array; /* Salida */

	if (!s1)
		s1 = ""; /* Devuelve un string vacio */
	if (!s2)
		s2 = "";
	for (size = 0; s1[size] != '\0'; size++) /* leng del string */
		;
	for (size2 = 0; s2[size2] != '\0'; size2++) /* leng string */
		;
	array = malloc(((size) + (size2 + 1)) * sizeof(char)); /* New memory alloc */

	if (!array)
	{
		return (NULL); /* Devuelve NULLL si malloc falla */
	}
	for (i = 0; i < size; i++)
	{
		array[i] = s1[i]; /* Copiamos string en base a string dado por main */
	}
	for (j = 0; j < (size2 + 1); j++)
	{
		array[i + j] = s2[j]; /* Copiamos string en base a string dado por main */
	}
	return (array); /* Devolvemos string nuevo */
}
