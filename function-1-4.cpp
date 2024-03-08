//
//  function-1-4.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 8/3/2024.
//

#include <stdio.h>

void	print_scaled(int array[3][3],int scale)
{
	int	edge_size;
	int	i;
	int	j;

	edge_size = 3;
	i = 0;
	while (i < edge_size)
	{
		j = 0;
		while (j < edge_size)
		{
			printf("%d ", array[i][j] * scale);
			j++;
		}
		printf("\n");
		i++;
	}
}
