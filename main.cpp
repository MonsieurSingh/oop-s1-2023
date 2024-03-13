//
//  main.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 13/3/2024.
//

#include <iostream>
#include "workshop.h"

void			pointer_fun(double	*debe, char	*str, double db, char c)
{
	debe = &db;
	str = &c;
	std::cout << *debe << std::endl << *str << std::endl;
}

int main(int argc, const char * argv[])
{
	double *debe = NULL;
	char *str = NULL;
	double db_arr[] = {1,2,3.14};
	double	db;
	char	c;
	double	max;
	
	db = 10.00123;
	c = 't';
	pointer_fun(debe, str, db, c);
	changeValue(&db);
	printArray(db_arr, 3);
	max = arrayMax(db_arr, 3);
	std::cout << max << std::endl;
	double *new_arr = dynamicArray(4, 3.14159);
	printArray(new_arr, 4);
	max = arrayMax(new_arr, 4);
	std::cout << max << std::endl;
	delete [] new_arr;
	return (0);
}
