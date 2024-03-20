//
//  main-2-1.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 18/3/2024.
//

#include <iostream>

extern int		*readNumbers();
extern void		hexDigits(int *numbers, int length);

int main(int argc, const char * argv[]) {
	int *numbers;
	
	numbers = readNumbers();
	hexDigits(numbers, 10);
	return (0);
}
