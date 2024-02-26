//
//  main.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 26/2/2024.
//

#include <iostream>
#include <stdio.h>

extern int num_count(int array[], int n, int number);

int main()
{
	int array[7] = {4,5,6,7,8,9,13};
	int	number;
	
	number = 4;
	std::cout << "The number " << number << " appears " << 
	num_count(array, 7, number) << " times in the array" << std::endl;
	return 0;
}
