//
//  main-1-5.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 8/3/2024.
//

#include <stdio.h>

extern	void	print_summed(int[3][3], int[3][3]);
int main(void)
{
	int matrix1[3][3] =
	{
		{0,1,2},
		{3,4,5},
		{6,7,8}
	};
	int matrix2[3][3] =
	{
		{0,0,0},
		{2,2,2},
		{-5,-4,8}
	};
	print_summed(matrix1, matrix2);
	return (0);
}
