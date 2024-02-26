//
//  main.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 26/2/2024.
//

#include <iostream>

extern int array_sum(int[], int);

int main()
{
	int array[5] = {4,5,6,7,8};
	std::cout << "The sum is: " << array_sum(array, 6) << std::endl;
	return 0;
}
