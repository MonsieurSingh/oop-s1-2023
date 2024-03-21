//
//  function-1-2.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 21/3/2024.
//

#include <stdio.h>
#include "Person.h"

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
