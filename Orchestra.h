//
//  Orchestra.h
//  oop-s1-2023
//
//  Created by Devjyot Singh on 27/3/2024.
//

#ifndef Orchestra_h
#define Orchestra_h

#include <iostream>
#include <string>
#include "Musician.h"

class Orchestra
{
private:
	static constexpr int MAX_SIZE = 100;
	int	size;
	Musician *members;
public:
	Orchestra();
	Orchestra(int size);
	~Orchestra();
	int get_current_number_of_members();
	bool has_instrument(std::string instrument);
	Musician *get_members();
	bool add_musician(Musician new_musician);
};

#endif
