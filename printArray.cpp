//
//  printArray.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 13/3/2024.
//

#include <iostream>
#include "workshop.h"

void	printArray(double *db_arr, int n)
{
	while (n--)
	{
		std::cout << *db_arr << std::endl;
		db_arr++;
	}
}
