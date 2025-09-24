/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:34:41 by alamrani          #+#    #+#             */
/*   Updated: 2025/07/24 20:39:23 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32 ;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char str[] = "LOWER CASE ME!";
	int i = 0 ;
	ft_strlowcase(str);
	while (str[i] != '\0'){
		write(1,&str[i],1);
		i++;
	}
	return 0;
} */
