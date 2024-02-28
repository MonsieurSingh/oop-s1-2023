//
//  function-2-3.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 28/2/2024.
//

#include <stdio.h>

void two_five_nine(int array[], int n)
{
	int	c;
	int	i;
	int	j;
	int	k;
	
	c = 0;
	i = 0;
	j = 0;
	k = 0;
	while (c < n)
	{
		switch (array[c])
		{
			case 2:
				i++;
				break;
			case 5:
				j++;
				break;
			case 9:
				k++;
			default:
				break;
		}
		c++;
	}
	printf("2:%d;5:%d;9:%d\n", i, j, k);
}
