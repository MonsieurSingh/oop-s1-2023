//
//  main-2-2.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 28/2/2024.
//

#include <iostream>

extern int max_element(int[], int);

int main(void)
{
	int array[7] = {4,5,6,7,8,99,1};
	std::cout << "The biggest element is: "
	<< max_element(array, 7)
	<< std::endl;
	return (0);
}
