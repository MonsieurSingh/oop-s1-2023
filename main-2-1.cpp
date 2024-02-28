//
//  main-2-1.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 26/2/2024.
//

#include <iostream>

extern int min_element(int[], int);

int main(void)
{
	int array[5] = {4,5,6,7,8};
	std::cout << "The smallest element is: "
	<< min_element(array, 5)
	<< std::endl;
	return (0);
}
