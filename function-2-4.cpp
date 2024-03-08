//
//  function-2-4.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 8/3/2024.
//

#include <stdio.h>

int array_min(int integers[], int length)
{
	int	i;
	int	min;
	
	i = 0;
	if (length < 1)
		return (-1);
	min = integers[i];
	while(i < length)
	{
		if (integers[i] < min)
		{
			min = integers[i];
		}
		i++;
	}
	return (min);
}

int array_max(int integers[], int length)
{
	int	i;
	int	max;
	
	i = 0;
	if (length < 1)
		return (-1);
	max = integers[i];
	while(i < length)
	{
		if (integers[i] > max)
		{
			max = integers[i];
		}
		i++;
	}
	return (max);
}

int	sum_min_max(int integers[], int length)
{
	int	sum;
	
	sum = min_element(integers, length) + max_element(integers, length);
	if (sum != -2)
		return (sum);
	else
		return (-1);
}
