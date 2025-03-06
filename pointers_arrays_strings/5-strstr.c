#include "main.h"
/**
 *
 *
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int matching = 0;
	int i = 0;

	for (; *haystack; haystack++)
	{
		for (; *needle; needle++)
		{
			if (*haystack == *needle)
			{
				matching++;
				//recorrer needle hasta encontrar igual, sumar en matching
				//si matching es mayor a 2 quiere decir que hay coincidencia.
				//retortar el indice de haystack donde se encontro la coincidencia.
				//la coincidencia tiene que estar en serie.
				//sino no es substring.`
			}
		}
	}
	return ('\0');
}
