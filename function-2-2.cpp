//
//  function-2-2.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 26/2/2024.
//

#include <stdio.h>

int max_element(int array[], int n)
{
	int	i;
	int	max;
	
	i = 0;
	if (n < 1)
		return (0);
	max = array[i];
	while(i < n)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
		i++;
	}
	return (max);
}
