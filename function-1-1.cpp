//
//  function-1-1.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 26/2/2024.
//

#include <stdio.h>

int array_sum(int array[], int n)
{
	int	i;
	int	sum;
	
	sum = 0;
	i = 0;
	while (i < n)
	{
		sum += array[i];
		i++;
	}
	return (sum);
}
