//
//  main-2-1.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 21/3/2024.
//

#include <iostream>
#include "Person.h"
#include <stdio.h>

extern PersonList createPersonList(int n);

int main(int argc, const char * argv[]) {
	int	n;
	int	i;
	PersonList list;
	
	n = 5;
	i = 0;
	list = createPersonList(n);
	while (i < n)
	{
		printf("Person %d:\n", i);
		std::cout << "\tName: " << list.people[i].name << std::endl;
		std::cout << "\tAge: " << list.people[i].age << std::endl;
		i++;
	}
	return (0);
}
