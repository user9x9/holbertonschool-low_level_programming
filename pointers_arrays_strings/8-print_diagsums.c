#include "main.h"
#include <stdio.h>

/**
* print_diagsums - Affiche la somme des deux diagonales d'une matrice carrée.
* @a: Pointeur vers la matrice (traitée comme un tableau unidimensionnel)
* @size: Taille de la matrice (dimension de la matrice carrée)
*/

void print_diagsums(int *a, int size)
{
    int i = 0;
    int n1 = 0;
    int n2 = 0;

    while (i < size)
    {
        n1 = n1 + a[i * size + i];
        n2 = n2 + a[i * size + (size - i - 1)];

        i++;
    }
    printf("%d, %d\n", n1, n2);
}
