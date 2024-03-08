//
//  main-2-1.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 8/3/2024.
//

#include <stdio.h>
#include <iostream>
#include <string>

extern void print_binary_str (std::string decimal_number);

int	main(void)
{
	print_binary_str ("0");
	print_binary_str ("789");
	print_binary_str ("123456789");
}
