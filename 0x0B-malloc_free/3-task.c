#include <stdlib.h>
#include <string.h>
#include "main.h"

char *str_concat(char *s1, char *s2)
{
	char *new;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	new = malloc(sizeof(char) * (strlen(s1) + strlen(s2)));

	if (new == NULL)
		return (NULL);

	strcpy(new, s1);
	strcat(new, s2);

	return (new);

}


