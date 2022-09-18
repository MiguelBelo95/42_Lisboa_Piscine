#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i; //index

    i = 0;
    while ( i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}


