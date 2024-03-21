//
//  main-1-4.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 21/3/2024.
//

#include <iostream>
#include "Person.h"
#include <stdio.h>

extern PersonList shallowCopyPersonList(PersonList pl);

PersonList createPersonList(int n)
{
	struct Person 		person_n;
	struct PersonList	person_l;
	Person				*person_ptr;
	
	person_ptr = new Person[n];
	person_l.people = person_ptr;
	person_l.numPeople = n;
	while (n--)
	{
		person_n.name = "Jane Doe";
		person_n.age = 1;
		person_ptr[n] = person_n;
	}
	return (person_l);
}

int main(int argc, const char * argv[]) {
	int	n;
	int	i;
	PersonList list;
	PersonList list2;
	
	n = 5;
	i = 0;
	list = createPersonList(n);
	list2 = shallowCopyPersonList(list);
	while (i < n)
	{
		printf("Person %d:\n", i);
		std::cout << "\tName: " << list2.people[i].name << std::endl;
		std::cout << "\tAge: " << list2.people[i].age << std::endl;
		i++;
	}
	return (0);
}
