//
//  main-3-2.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 28/2/2024.
//

#include <iostream>

extern int median_array(int array[], int n);

int main(void)
{
	int array[5] = {1,2,3,2,1};
	std::cout
	<< "The median is "
	<< (median_array(array, 5))
	<< std::endl;;
	return (0);
}
