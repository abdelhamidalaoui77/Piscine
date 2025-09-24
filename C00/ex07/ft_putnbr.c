/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 21:25:47 by alamrani          #+#    #+#             */
/*   Updated: 2025/08/04 19:22:24 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	long	n;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		n = (long)nb * -1;
		ft_putnbr(n / 10);
		c = n % 10 + '0';
		write(1, &c, 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	c = nb % 10 + '0';
	write(1, &c, 1);
}
/*
int	main()
{
	///write(1, "-2147483648", 11);
	int n = -2147483648;
	int m = 2147483647;
	ft_putnbr(n);
	write(1, "\n", 1);
	ft_putnbr(m);
	return 0;
} */
