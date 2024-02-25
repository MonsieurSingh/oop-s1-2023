//
//  main.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 26/2/2024.
//

#include <iostream>

extern int count(int[], int);

int main()
{
	int array[5] = {4,5,6,7,8};
	std::cout << "The number is: " << count(array, 5) << std::endl;
	return 0;
}
