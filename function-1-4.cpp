//
//  function-1-4.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 21/3/2024.
//

#include <stdio.h>
#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl)
{
	struct PersonList	pl2;
	
	pl2.people = pl.people;
	pl2.numPeople = pl.numPeople;
	return (pl2);
}
