//
//  main-3-1.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 28/2/2024.
//

#include <iostream>

extern bool is_fanarray(int array[], int n);

int main(void)
{
	int array[5] = {1,2,3,2,1};
	std::cout
	<< "The array is "
	<< (is_fanarray(array, 5) ? "" : "not ")
	<< "a fan array"
	<< std::endl;;
	return (0);
}
