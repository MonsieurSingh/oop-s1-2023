//
//  function-2-1.cpp
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

long	check_sign(const std::string& str)
{
	long	sign;
	long	index;
	
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

long	char_index(const std::string& base, char c)
{
	long	i;
	
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

long	ft_atoi_base(const std::string& str, const std::string& base)
{
	long			index;
	long			is_pos;
	long			nb;
	long			base_len;
	
	index = 0;
	is_pos = check_sign(str);
	nb = 0;
	base_len = str_len(base);
	if (base_len < 2)
		return (0);
	while (str[index] != '\0') {
		if (str[index] != ' ' && str[index] != '+' && str[index] != '-'
			&& char_index(base, str[index]) != -1)
		{
			if (str[index - 1] == ' ')
				return 0;
			else
				nb = (nb * base_len) + char_index(base, str[index]);
		}
		index++;
	}
	return (is_pos * nb);
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

void	print_binary_str (std::string decimal_number)
{
	long	i = ft_atoi_base(decimal_number, "0123456789");
//	std::cout << i;
	ft_putnbr_base(i, "01");
	std::cout << std::endl;
}
