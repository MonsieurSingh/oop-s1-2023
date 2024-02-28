//
//  function-2-5.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 28/2/2024.
//

#include <stdio.h>

bool is_descending(int array[], int n)
{
	if (n == 1 || n == 0)
		return (true);
	return (array[n - 1] >= array[n - 2] && is_descending(array, n - 1));
}
