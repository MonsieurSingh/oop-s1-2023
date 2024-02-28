//
//  main-3-3.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 28/2/2024.
//

#include <iostream>

extern double weighted_average(int array[], int n);

int main(void)
{
	int array[6] = {1,2,1,4,1,3};
	std::cout
	<< "The weighted average is "
	<< (weighted_average(array, 6))
	<< std::endl;;
	return (0);
}
