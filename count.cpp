//
//  count.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 26/2/2024.
//

#include <stdio.h>

int count(int arr[], int size)
{
	int	i;
	int	sum;
	
	i = 0;
	sum = 0;
	while(i < size)
	{
		if (arr[i] % 2 == 0)
		{
			sum += 1;
		}
		i++;
	}
	return (sum);
}
