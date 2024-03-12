//
//  arrayMax.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 13/3/2024.
//

#include <iostream>
#include "workshop.h"

double arrayMax(double *db_arr, int n)
{
	double	max;
	
	max = *db_arr;
	while (n--)
	{
		if (*db_arr > max)
			max = *db_arr;
		db_arr++;
	}
	return (max);
}
