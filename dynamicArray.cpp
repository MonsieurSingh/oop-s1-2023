//
//  dynamicArray.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 13/3/2024.
//

#include <iostream>
#include "workshop.h"

double	*dynamicArray(int n, double M)
{
	double	*ptr;
	
	ptr = new double[n];
	while (n--)
		ptr[n] = M;
	return (ptr);
}
