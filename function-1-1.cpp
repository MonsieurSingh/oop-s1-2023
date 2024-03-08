//
//  function-1-1.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 8/3/2024.
//

int	sum_diagonal(int array[4][4])
{
	int	edge_size;
	int	i;
	int	j;
	int	sum;
	
	edge_size = 4;
	i = 0;
	sum = 0;
	while (i < edge_size)
	{
		j = 0;
		while (j < edge_size)
		{
			if (i == j)
				sum += array[i][j];
			j++;
		}
		i++;
	}
	return (sum);
}
