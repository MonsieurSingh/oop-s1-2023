//
//  transform.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 4/3/2024.
//

#include <stdio.h>
#include <unistd.h>

int ft_itob(int octet)
{
	int	i;
	int	bit;
	
	i = 32;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
	write(1, "\n", 1);
	return (0);
}

int main(int argc, const char * argv[]) {
	// insert code here...
	(void)argc;
	(void)argv;
	
	ft_itob(15);
	//	ft_itob(5);
	//	std::cout << "Hello, World!\n";
	return 0;
}
