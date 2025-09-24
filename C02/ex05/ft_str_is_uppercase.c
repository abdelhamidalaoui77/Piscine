/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:31:38 by alamrani          #+#    #+#             */
/*   Updated: 2025/07/24 17:43:21 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main()
{
	char str1[] = "ASBMVDNMSB";
	char str2[] = "ADJNSdSDJ";
	char str3[] = "";
	int i, j, k;
	i = ft_str_is_uppercase(str1);
	j = ft_str_is_uppercase(str2);
	k = ft_str_is_uppercase(str3);

	if (i) {
		write(1,"str1 is uppercase\n",18);
	} else {
		write(1,"str2 is not uppercase\n",22);
	}

	if (j) {
                write(1,"str2 is uppercase\n",18);
        } else {
                write(1,"str2 is not uppercase\n",22);
        }

	if (k) {
                write(1,"str3 is uppercase\n",18);
        } else {
                write(1,"str3 is not uppercase\n",22);
        }

	return 0;
} */
