//
//  main-1-1.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 8/3/2024.
//

#include <iostream>

extern int	sum_diagonal(int[4][4]);

int	main(void)
{
	int	array[4][4] = 
	{
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	std::cout << "The sum of the array along the diagonal is "
	<< sum_diagonal(array)
	<< std::endl;
}
