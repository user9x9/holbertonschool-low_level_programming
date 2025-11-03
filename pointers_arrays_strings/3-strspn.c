#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    unsigned int i = 0;
    unsigned int a = 0;
    unsigned int count = 0;

    while (s[i] != '\0')
    {
        a = 0;

        while (accept[a] != '\0')
        {
            if (s[i] == accept[a])
            {
                break;
            }
        a++;
        }
            if (accept[a] == '\0')
            {
                return (count);
            }
    count++;
    i++;
    }
    return (count);
}