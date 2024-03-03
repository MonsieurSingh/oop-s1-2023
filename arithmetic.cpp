//
//  arithmetic.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 4/3/2024.
//

#include <stdio.h>

int	add(int x, int y)
{
	int keep;
	int res;

	keep = (x & y) << 1;
	res = x^y;
	if (keep == 0)
		return res;
	
	return (add(keep, res));
}

int subtract(int x, int y)
{
	if (y == 0)
		return x;
	return subtract(x ^ y, (~x & y) << 1);
}

int	shift_left(int octet)
{
	return (octet <<= 1);
}

int	shift_right(int octet)
{
	return (octet >>= 1);
}

int main()
{
	printf("%d\n", add(1, 1));
	printf("%d\n", subtract(2, 1));
	printf("%d\n", shift_left(16));
	printf("%d\n", shift_right(16));
	return (0);
}
