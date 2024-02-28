//
//  main-1-4.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 26/2/2024.
//

#include <iostream>

extern int sum_two_arrays(int[], int[], int n);

int main(void)
{
	int array[7] = {4,5,6,7,8,9,13};
	int array2[7] = {4,5,6,7,8,9,13};
	int	number;

	number = 7;
	std::cout << "The sum of the two arrays is: "
	<< sum_two_arrays(array, array2, number)
	<< std::endl;
	return 0;
}
