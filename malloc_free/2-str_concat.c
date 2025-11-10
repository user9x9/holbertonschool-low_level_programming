#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
    unsigned int i, a = 0;
    char *result;

    if (s1 == NULL)
    {
        s1 = "";
    }

    if (s2 == NULL)
    {
        s2 = "";
    }

    while (s1[i] != '\0')
    {
        i++;
    }

    while (s2[a] != '\0')
    {
        a++;
    }

    result = malloc((i + a + 1) * sizeof(char));

    if (result == NULL)
    {
        return (NULL);
    }

    while (s1[i] != '\0')
    {
        result[i] = s1[i];
        i++;
    }

    while (s2[a] != '\0')
    {
        result[i + a] = s2[a];
        a++;
    }

    result[i + a] = '\0';

    return (result);
}