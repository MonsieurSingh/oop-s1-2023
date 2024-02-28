//
//  function-3-5.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 28/2/2024.
//

#include <stdio.h>

double sum_even(double arr[], int n)
{
	int		i;
	double	sum;
	
	i = 0;
	sum = 0;
	while(i < n)
	{
		if (i % 2 == 0)
			sum += arr[i];
		i++;
	}
	return (sum);
}
