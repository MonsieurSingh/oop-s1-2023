//
//  main-1-1.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 26/2/2024.
//

#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int n);

int main(int argc, const char * argv[]) {
	int	n;
	int	i;
	
	n = 5;
	i = 0;
	Person *ptr_arr = createPersonArray(5);
	while (i < n)
	{
		printf("Person %d:\n", i);
		std::cout << "\tName: " << ptr_arr[i].name << std::endl;
		std::cout << "\tAge: " << ptr_arr[i].age << std::endl;
		i++;
	}
	return (0);
}
