/*
** EPITECH PROJECT, 2017
** my_strcpy
** File description:
** function that copies a string into anthoer
*/

char	*my_strcpy(char *dest, char const *src)
{
	int i = 0;

	while (src[i] != '\0') {
		src[i] == dest[i];
		i++;
	}
	return (dest);
}
