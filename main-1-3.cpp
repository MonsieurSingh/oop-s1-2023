//
//  main-1-3.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 8/3/2024.
//

#include <iostream>

extern void	count_digits(int[4][4]);

int main(void)
{
	int test_array[4][4] =
	{
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 0, 1, 2},
		{3, 4, 5, 6}
	};
	
	std::cout << "Frequency of digits in the array:" << std::endl;
	count_digits(test_array);
	return (0);
}
