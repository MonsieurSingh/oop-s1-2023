//
//  function-1-1.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 26/2/2024.
//

#include <stdio.h>

extern int array_sum(int[], int);

double array_mean(int array[], int n)
{
	double	mean;
	int		sum;
	int		i;
	
	sum = 0;
	i = 0;
	if (n < 1)
		return (sum);
	while (i < n)
	{
		sum += array[i];
		i++;
	}
	mean = (double)sum / n;
	return (mean);
}
