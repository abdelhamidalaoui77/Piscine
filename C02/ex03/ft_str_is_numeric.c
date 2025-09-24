/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:14:29 by alamrani          #+#    #+#             */
/*   Updated: 2025/07/24 17:06:31 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main()
{
	char str1[] = "123h47";
	char str2[] = "28063865";
	char str3[] = "";
	int i, j, k;
	i = ft_str_is_numeric(str1);
	j = ft_str_is_numeric(str2);
	k = ft_str_is_numeric(str3);
	
	if (i) {
		write(1,"str1 is numeric\n",16);
	} else {
		write(1,"str1 is not numeric\n",20);
	}

	if (j) {
                write(1,"str2 is numeric\n",16);  
        } else {
                write(1,"str2 is not numeric\n",20);
        }

	if (k) {
                write(1,"str3 is numeric\n",16);  
        } else {
                write(1,"str3 is not numeric\n",20);
        }

	return 0;
} */
