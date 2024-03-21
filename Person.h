//
//  Person.h
//  oop-s1-2023
//
//  Created by Devjyot Singh on 21/3/2024.
//

#ifndef Person_h
# define Person_h

# include <iostream>

struct Person {
	std::string name;
	int age;
};

struct PersonList {
	Person* people;
	int numPeople;
};

#endif /* Person_h */
