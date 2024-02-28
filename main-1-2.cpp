//
//  main-1-2.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 26/2/2024.
//

#include <iostream>

extern double array_mean(int[], int);

int main()
{
	int array[7] = {4,5,6,7,8,9,13};
	std::cout << "The mean is: " << array_mean(array, 0) << std::endl;
	return 0;
}
