//
//  main-2-4.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 28/2/2024.
//

#include <iostream>

extern bool is_ascending(int array[], int n);

int main(void)
{
	int array[6] = {1,4,3,4,5,6};
	std::cout
	<< "The array is "
	<< (is_ascending(array, 6) ? "" : "not")
	<< " ascending"
	<< std::endl;;
	return (is_ascending(array, 6));
}
