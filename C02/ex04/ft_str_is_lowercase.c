/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:07:27 by alamrani          #+#    #+#             */
/*   Updated: 2025/07/24 17:30:28 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main()
{
	char str1[] = "abdjkshdjnxhb";
	char str2[] = "anflkdmfGkdm";
	char str3[] = "";
	int i, j, k;
	i = ft_str_is_lowercase(str1);
	j = ft_str_is_lowercase(str2);
	k = ft_str_is_lowercase(str3);

	if (i) {
		write(1,"str1 is lowercase\n",18);
	} else {
		write(1,"str2 is not lowercase\n",22);
	}

	if (j) {
                write(1,"str2 is lowercase\n",18);
        } else {
                write(1,"str2 is not lowercase\n",22);
        }

	if (k) {
                write(1,"str3 is lowercase\n",18);
        } else {
                write(1,"str3 is not lowercase\n",22);
        }

	return 0;
} */
