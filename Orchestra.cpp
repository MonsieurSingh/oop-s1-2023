//
//  Orchestra.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 27/3/2024.
//

#include "Orchestra.h"

Orchestra::Orchestra() : size(0), members(nullptr) {}
Orchestra::Orchestra(int size) : size(size)
{
	members = new Musician[size];
}
Orchestra::~Orchestra()
{
	delete[] members;
}
int Orchestra::get_current_number_of_members() {
	return size;
}
bool Orchestra::has_instrument(std::string instrument)
{
	for (int i = 0; i < size; ++i)
	{
		if (members[i].get_instrument() == instrument)
		{
			return true;
		}
	}
	return false;
}
Musician* Orchestra::get_members()
{
	return members;
}
bool Orchestra::add_musician(Musician new_musician)
{
	if (size >= MAX_SIZE) {
		std::cout << "Cannot add more musicians. Orchestra is full." << std::endl;
		return false;
	}
	members[size++] = new_musician;
	return true;
}
