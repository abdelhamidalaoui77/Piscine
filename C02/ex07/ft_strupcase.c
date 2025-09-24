/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:18:11 by alamrani          #+#    #+#             */
/*   Updated: 2025/07/24 20:33:10 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32 ;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char str[] = "upper case me!";
	int i = 0 ;
	ft_strupcase(str);
	while (str[i] != '\0'){
		write(1,&str[i],1);
		i++;
	}
	return 0;
} */
