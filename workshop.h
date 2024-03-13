//
//  workshop.h
//  oop-s1-2023
//
//  Created by Devjyot Singh on 13/3/2024.
//

#include <stdio.h>

void	changeValue(double *db)
{
	*db = 42;
}

void	printArray(double *db_arr, int n)
{
	while (n--)
	{
		std::cout << *db_arr << " ";
		db_arr++;
	}
}

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

double	*dynamicArray(int n, double M)
{
	double	*ptr;
	
	ptr = new double[n];
	while (n--)
		ptr[n] = M;
	return (ptr);
}
