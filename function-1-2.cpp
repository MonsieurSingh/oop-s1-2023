//
//  function-1-2.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 8/3/2024.
//

#include <stdio.h>

int is_identity(int array[10][10])
{
	int	edge_size;
	int	i;
	int	j;
	
	edge_size = 10;
	i = 0;
	while (i < edge_size)
	{
		j = 0;
		while (j < edge_size)
		{
			if (i == j && array[i][j] != 1)
				return (0);
			if (i != j && array[i][j] != 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
