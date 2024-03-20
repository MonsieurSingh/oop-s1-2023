//
//  function-2-1.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 18/3/2024.
//

#include <iostream>

int		*readNumbers();
void	hexDigits(int*, int);

int		*readNumbers()
{
	std::string c;
	int *d;
	int	t;
	int	i;
	
	d = new int[10];
	if (!d)
		exit(EXIT_FAILURE);
	i = 0;
	while (i < 10)
	{
		std::cin >> c;
		t = std::stoi(c);
		d[i] = t;
		i++;
	}
	return (d);
}
void	hexDigits(int *numbers, int length)
{
	int	i;
	
	i = 0;
	while (i < length)
	{
		std::cout 
			<< i
			<< " "
			<< numbers[i] << " "
			<< (numbers[i] % 16)["0123456789ABCDEF"]
			<< std::endl;
		i++;
	}
	delete [] numbers;
	return ;
}
