#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_to_98(int n)
{

	
	if (n == 98)
	{
		printf("98\n");
		return;
	}
	
	
	
	else if (n < 98)
	{	
		while (n < 98)
		{
			printf("%d", n);
			n++;

			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	
		else
		{
			while (n > 98)
			{
				printf("%d", n);
				n--;
			
				if (n != 98)
				{
					printf(", ");
				}
			}
		}
	printf("\n");
}
