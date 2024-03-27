//
//  Orchestra.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 27/3/2024.
//

#include "Orchestra.h"

Orchestra::Orchestra() : max_size(0), current_size(0), members(nullptr) {}
Orchestra::Orchestra(int size) : max_size(size), current_size(0) {
	members = new Musician[max_size];
}
Orchestra::~Orchestra() {
	delete[] members;
}
int Orchestra::get_current_number_of_members() {
	return current_size;
}
bool Orchestra::has_instrument(std::string instrument) {
	for (int i = 0; i < current_size; ++i) {
		if (members[i].get_instrument() == instrument) {
			return true;
		}
	}
	return false;
}
Musician *Orchestra::get_members() {
	return members;
}
bool Orchestra::add_musician(Musician new_musician) {
	if (current_size >= max_size) {
		return false;
	}
	members[current_size++] = new_musician;
	return true;
}
