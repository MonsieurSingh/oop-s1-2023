//
//  main-4-1.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 20/3/2024.
//

#include <stdio.h>
#include <iostream>

extern int	*readNumbers();
extern void	printNumbers(int *numbers, int length);
extern bool	equalsArray(int*, int*, int);
extern int	*reverseArray(int*, int);
extern int	secondSmallestSum(int *numbers, int length);

int main(int argc, const char * argv[]) {
	int *numbers1;
	int	second_smallest_sum;
	
	std::cout << "enter array1:" << std::endl;
	numbers1 = readNumbers();
	second_smallest_sum = secondSmallestSum(numbers1, 10);
	std::cout
		<< "The second smallest sum is: "
		<< second_smallest_sum
		<< std::endl;
	delete [] numbers1;
	return (0);
}
