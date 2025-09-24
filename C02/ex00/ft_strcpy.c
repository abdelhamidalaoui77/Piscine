/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 23:07:27 by alamrani          #+#    #+#             */
/*   Updated: 2025/07/23 13:37:33 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char *str1 = "Hello, World !";
	char str2[100] ;
	ft_strcpy(str2,str1);
	int i =0;
	while (str2[i] != '\0')
	{
		write(1, &str2[i], 1);
		i++;
	}
	return 0;
}*/
