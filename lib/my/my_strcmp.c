/*
** EPITECH PROJECT, 2017
** my_strcmp
** File description:
** str cmp
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
	if (my_strlen(s1) != my_strlen(s2))
		return (1);
	for(int i = 0; s1[i] != '\0'; i++)
		if(s2[i] != s1[i])
			return (1);
	return (0);
}
