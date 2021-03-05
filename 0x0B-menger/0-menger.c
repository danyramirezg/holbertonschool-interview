#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "menger.h"

/**
 * menger - function that draws a 2D Menger Sponge
 * @level:  is the level of the Menger Sponge to draw
 */

void menger(int level)
{
	int input = 1;
	int i, j, w, h, size;

	size = pow(3, level);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			h = i, w = j;
			while (input)
			{
				if (h % 3 == 1 && w % 3 == 1)
				{
					printf(" ");
					break;
				}
				if (h == 0 || w == 0)
				{
					printf("#");
					break;
				}
				h = h / 3;
				w = w / 3;
			}
		}
		printf("\n");
	}
}
