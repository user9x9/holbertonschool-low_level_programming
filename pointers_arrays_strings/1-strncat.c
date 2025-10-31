#include "main.h"

/**
 * _strncat - concatene deux chaines
 *
 * @dest: the destination string where src will be appended
 * @src: the source string that will be appended to dest
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
    int i = 0;
    int a = 0;

    while (dest[i] != '\0') {
        i++;
    }

    while (n > 0 && src[a] != '\0') {
        dest[i] = src[a];
        i++;
        a++;
        n--;
    }

    dest[i] = '\0';

    return (dest);
}