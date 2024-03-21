//
//  function-3-1.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 21/3/2024.
//

#include <stdio.h>
#include "Person.h"

PersonList deepCopyPersonList(PersonList pl)
{
	int					n;
	struct PersonList	pl2;
	
	n = pl.numPeople;
	pl2.people = new Person[n];
	pl2.numPeople = pl.numPeople;
	while (n--)
	{
		pl2.people[n].name = pl.people[n].name;
		pl2.people[n].age = pl.people[n].age;
	}
	return (pl2);
}
