//
//  main-3-4.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 28/2/2024.
//

#include <iostream>

extern void print_pass_fail(char grade);

int main(void)
{
	char	c;
	
	c = 'A';
	while (c < 'Z')
	{
		print_pass_fail(c);
		c++;
	}
	return (0);
}
