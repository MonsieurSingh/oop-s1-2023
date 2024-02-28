//
//  function-3-1.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 28/2/2024.
//

#include <stdio.h>

bool is_fanarray(int array[], int n)
{
	int		i;

	i = 0;
	if (n < 1)
		return false;
	while (i < n / 2)
	{
		if ((array[i] != array[(n - 1) - i])
			|| (i > 0 && array[i] <= array[i - 1]))
			return (false);
		i++;
	}
	return(true);
}
