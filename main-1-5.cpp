//
//  main.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 26/2/2024.
//

#include <iostream>
#include <stdio.h>

extern int count_evens(int);

int main()
{
	int	number;

	number = 7;
	std::cout << "There exist "
	<< count_evens(number)
	<< " even numbers between 1 and "
	<< number
	<< std::endl;
	return 0;
}
