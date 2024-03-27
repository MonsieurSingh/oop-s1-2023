//
//  Musician.h
//  oop-s1-2023
//
//  Created by Devjyot Singh on 27/3/2024.
//

#ifndef MUSICIAN_H
# define MUSICIAN_H

#include <string>

class Musician
{
private:
	std::string instrument;
	int experience;
public:
	Musician();
	Musician(std::string instrument, int experience);
	std::string get_instrument();
	int get_experience();
};

#endif
