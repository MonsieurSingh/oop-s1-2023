//
//  function-2-2.cpp
//  oop-s1-2023
//
//  Created by Devjyot Singh on 8/3/2024.
//

#include <stdio.h>
#include <unistd.h>
#include <string>
#include <iostream>

int	str_len(const std::string& str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_sign(const std::string& str)
{
	int	sign;
	int	index;
	
	sign = 1;
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == '-')
			sign *= -1;
		else if (str[index] == '+')
			sign *= 1;
		index++;
	}
	return (sign);
}

int	char_index(const std::string& base, char c)
{
	int	i;
	
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int ft_atoi_base(int binary_digits[], int number_of_digits, const std::string& base) {
	int nb = 0;
	int base_len = (int)base.length();
	(void)base_len;
	for (int i = 0; i < number_of_digits; ++i) {
		nb = nb * 2 + binary_digits[i];
	}
	return nb;
}

void	ft_putnbr_base(long nbr, const std::string& base)
{
	long	lnb;
	char	c[99];
	int		index;
	int		base_len;
	
	lnb = nbr;
	base_len = str_len(base);
	index = 0;
	if (nbr == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (lnb < 0)
	{
		write(1, "-", 1);
		lnb *= -1;
	}
	while (lnb)
	{
		c[index++] = base[(lnb % base_len)];
		lnb /= base_len;
	}
	while (index--)
		putchar(c[index]);
}

int	binary_to_int(int binary_digits[], int number_of_digits)
{
	int	i = ft_atoi_base(binary_digits, number_of_digits, "01");
	return (i);
}
