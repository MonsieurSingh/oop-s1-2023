//
//  function-2-1.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 26/2/2024.
//

#include <stdio.h>

int min_element(int array[], int n)
{
	int	i;
	int	min;
	
	i = 0;
	if (n < 1)
		return (0);
	min = array[i];
	while(i < n)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
		i++;
	}
	return (min);
}
