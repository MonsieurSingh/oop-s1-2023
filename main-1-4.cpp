//
//  main-1-4.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 8/3/2024.
//

#include <iostream>

extern void	print_scaled(int[3][3],int);

int main(void)
{
	int scale_factor;
	int test_array[3][3] =
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	scale_factor = 2;
	print_scaled(test_array, scale_factor);
	return (0);
}
