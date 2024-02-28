//
//  function-3-3.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 28/2/2024.
//

#include <stdio.h>

double weighted_average(int array[], int n)
{
	int	i;
	int	j;
	int	w_avg;
	int	count;
	
	i = 0;
	w_avg = 0;
	while (i < n)
	{
		count = 0;
		j = 0;
		while (j < n)
		{
			if (array[i] == array[j])
				count++;
			j++;
		}
		w_avg += (array[i] * count);
		i++;
	}
	return ((double)w_avg / n);
}
