//
//  function-2-4.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 28/2/2024.
//

#include <stdio.h>

bool is_ascending(int array[], int n)
{
	if (n == 1 || n == 0)
		return (true);
	return (array[n - 1] >= array[n - 2] && is_ascending(array, n - 1));
}
