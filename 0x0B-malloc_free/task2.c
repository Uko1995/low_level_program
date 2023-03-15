#include <stdlib.h>
#include "main.h"
#include <string.h>


char *_strdup(char *str)
{
	char *new;
	unsigned int a;

	if (str == NULL)
		return (NULL);

	a = strlen(str);

	new = malloc(sizeof(*str) * a);

	if (new == NULL)
		return (NULL);
	strcpy(new, str);


	return (new);
}

