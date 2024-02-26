//
//  function-1-1.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 26/2/2024.
//

#include <stdio.h>

int num_count(int array[], int n, int number)
{
	int	i;
	int	count;
	
	count = 0;
	i = 0;
	while (i < n)
	{
		if (array[i] == number)
			count++;
		i++;
	}
	return (count);
}
