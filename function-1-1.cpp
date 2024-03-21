//
//  function-1-1.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 21/3/2024.
//

#include <stdio.h>
#include "Person.h"

Person* createPersonArray(int n)
{
	struct Person 	person_n;
	Person			*person_ptr;
	
	person_ptr = new Person[n];
	person_n.name = "John Doe";
	person_n.age = 0;
	while (n--)
		person_ptr[n] = person_n;
	return (person_ptr);
}
