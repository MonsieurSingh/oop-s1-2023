//
//  main-3-5.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 28/2/2024.
//

#include <iostream>

extern double sum_even(double arr[], int n);

int main(void)
{
	double array[6] = {1.23,2,1,4.543,1,3};
	std::cout
	<< "The sum of even elements is "
	<< (sum_even(array, 6))
	<< std::endl;
	return (0);
}
