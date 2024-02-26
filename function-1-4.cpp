//
//  function-1-1.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 26/2/2024.
//

#include <stdio.h>

int sum_two_arrays(int array[], int secondarray[], int n)
{
	int	i;
	int	count;
	
	count = 0;
	i = 0;
	while (i < n)
	{
		count += array[i] + secondarray[i];
		i++;
	}
	return (count);
}
