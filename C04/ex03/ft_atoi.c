/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 20:42:31 by alamrani          #+#    #+#             */
/*   Updated: 2025/07/31 14:25:40 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	sign_count;
	int	result;

	sign_count = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign_count++;
		str++;
	}
	result = 0;
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - 48);
		str++;
	}
	if (!(sign_count % 2 == 0))
		return (-result);
	return (result);
}
