#include "main.h"
/**
* print_chessboard - affiche un échiquier de taille 8x8.
* @a: le tableau 2D représentant l'échiquier à afficher
*
* Description: Cette fonction parcourt chaque ligne et chaque colonne
* de l'échiquier et affiche chaque caractère à l'aide de la fonction
* _putchar. Après chaque ligne, un saut de ligne est effectué pour
* afficher l'échiquier correctement formatté.
*/

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		j = 0;

		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
