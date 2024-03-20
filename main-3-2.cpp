//
//  main-3-2.cpp
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

int main(int argc, const char * argv[]) {
	int *numbers1;
	int	*numbers2;
	
	std::cout << "enter array1:" << std::endl;
	numbers1 = readNumbers();
	numbers2 = reverseArray(numbers1, 10);
	std::cout << (equalsArray(numbers1, numbers2, 10) ? "true" : "false") << std::endl;
	delete [] numbers1;
	delete [] numbers2;
	return (0);
}
