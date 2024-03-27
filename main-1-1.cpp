//
//  main-1-1.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 27/3/2024.
//

#include <iostream>
#include "Musician.h"
int main() {
	Musician m1;
	std::cout
		<< "Default instrument: "
		<< m1.get_instrument()
		<< ", Default experience: "
		<< m1.get_experience()
		<< std::endl;
	Musician m2("guitar", 5);
	std::cout << "Instrument: "
		<< m2.get_instrument()
		<< ", Experience: "
		<< m2.get_experience()
		<< std::endl;
	return (0);
}
