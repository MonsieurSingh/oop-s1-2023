//
//  function-3-2.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 28/2/2024.
//

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int median_array(int array[], int n)
{
	int	min;
	int	i;
	int	j;

	i = 0;
	if (n < 1)
		return (0);
	while (i < n)
	{
		j = i + 1;
		min = i;
		while (j < n) {
			if (array[j] < array[min])
				min = j;
			j++;
		}
		ft_swap(&array[i], &array[min]);
		i++;
	}
	return (array[n / 2]);
}
