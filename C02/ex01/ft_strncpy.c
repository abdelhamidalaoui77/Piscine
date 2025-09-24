/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 22:31:37 by alamrani          #+#    #+#             */
/*   Updated: 2025/07/24 11:33:26 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char str1[] = "hello,worldb;afaljnef";
	char str2[100] = "12345,barld !";
	int n  = 10;
	ft_strncpy(str2,str1,n);
	int i = 0;
	while (str2[i] != '\0')
	{
		write(1,&str2[i],1);
		i++;
	}
	return 0;
} */
