//
//  function-3-4.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 28/2/2024.
//

#include <stdio.h>

void print_pass_fail(char grade)
{
	if (grade == 'A' || grade == 'B' || grade == 'C')
		printf("Pass");
	else if (grade == 'D' || grade == 'E')
		printf("Fail");
	printf("\n");
}
