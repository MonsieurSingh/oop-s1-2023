//
//  function-1-3.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 8/3/2024.
//

#include <stdio.h>

void count_digits(int array[4][4])
{
	int	edge_size;
	int	i;
	int	j;
	int	frequency_arr[10] = {0};
	
	edge_size = 4;
	i = 0;
	while (i < edge_size)
	{
		j = 0;
		while (j < edge_size)
		{
			frequency_arr[array[i][j]]++;
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 10)
	{
		printf("%d:%d;", i, frequency_arr[i]);
		i++;
	}
}
