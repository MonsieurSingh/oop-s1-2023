//
//  function-2-3.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 8/3/2024.
//

#include <stdio.h>

bool is_palindrome(int integers[], int length)
{
	int		i;
	
	i = 0;
	if (length < 1)
		return false;
	while (i <= length / 2)
	{
		if ((integers[i] != integers[(length - 1) - i]))
			return (false);
		i++;
	}
	return(true);
}

int sum_array_elements(int integers[], int length)
{
	int	i;
	int	sum;
	
	sum = 0;
	i = 0;
	if (length < 1)
		return (-1);
	while (i < length)
	{
		sum += integers[i];
		i++;
	}
	return (sum);
}

int	sum_if_palindrome(int integers[], int length)
{
	if (is_palindrome(integers, length))
		return (sum_array_elements(integers, length));
	else if (length < 0)
		return (-1);
	else
		return (-2);
}
