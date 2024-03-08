//
//  function-1-5.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 8/3/2024.
//

#include <stdio.h>

void	print_summed(int array1[3][3],int array2[3][3])
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
			printf("%d ", array1[i][j] + array2[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
