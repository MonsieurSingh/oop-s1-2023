//
//  main-2-2.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 8/3/2024.
//

#include <stdio.h>

extern int	binary_to_int(int binary_digits[], int number_of_digits);

int	main(void)
{
	int	binary_digits[] = {1,1,1,0};
	binary_to_int(binary_digits, 4);
}
