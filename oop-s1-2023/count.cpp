//
//  count.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 26/2/2024.
//

#include <stdio.h>

int count(int arr[], int)
{
	int	i;
	int	sum;
	
	i = 0;
	sum = 0;
	while(i < 5)
	{
		sum += arr[i];
		i++;
	}
	return (sum);
}
