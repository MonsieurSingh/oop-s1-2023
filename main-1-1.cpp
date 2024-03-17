//
//  main-1-1.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 26/2/2024.
//

#include <iostream>

extern int		*readNumbers();
extern void		printNumbers(int *numbers, int length);

int main(int argc, const char * argv[]) {
	// insert code here...
	int *numbers;
	
	numbers = readNumbers();
	printNumbers(numbers, 10);
	std::cout << "Hello, World!\n";
	return 0;
}
