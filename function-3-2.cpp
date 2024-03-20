//
//  function-3-2.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 20/3/2024.
//

#include <iostream>
#include <stdio.h>

int		*readNumbers();
void	printNumbers(int*, int);
bool	equalsArray(int*, int*, int);
int		*reverseArray(int*, int);

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
void	printNumbers(int *numbers, int length)
{
	int	i;
	
	i = 0;
	while (i < length)
	{
		std::cout << i << " " << numbers[i] << std::endl;
		i++;
	}
	delete [] numbers;
	return ;
}

bool	equalsArray(int *numbers1, int *numbers2, int length)
{
	int	i;
	
	if (length <= 0)
		return (false);
	i = 0;
	while (i < length)
	{
		if (numbers1[i] != numbers2[i])
			return (false);
		i++;
	}
	return (true);
}

int	*reverseArray(int *numbers1, int length)
{
	int	i;
	int	*numbers2;

	i = 0;
	numbers2 = new int[length];
	while (length--)
	{
		numbers2[length] = numbers1[i];
		i++;
	}
	return (numbers2);
}
