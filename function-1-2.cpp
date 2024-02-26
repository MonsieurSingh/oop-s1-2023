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
	
	if (n == 0)
		return (0.0);
	mean = (double)array_sum(array, n) / n;
	return (mean);
}
