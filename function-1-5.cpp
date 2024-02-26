//
//  function-1-1.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 26/2/2024.
//

#include <stdio.h>

int count_evens(int number)
{
	int	i;
	int	count;
	
	count = 0;
	i = 1;
	while (i <= number)
	{
		if (i % 2 == 0)
			count += 1;
		i++;
	}
	return (count);
}
