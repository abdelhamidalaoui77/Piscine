/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:00:18 by alamrani          #+#    #+#             */
/*   Updated: 2025/07/24 18:13:15 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main()
{
	char str1[] = "sgj `~$^&8.B";
	char str2[] = "ADJNØÛ¬";
	char str3[] = "";
	int i, j, k;
	i = ft_str_is_printable(str1);
	j = ft_str_is_printable(str2);
	k = ft_str_is_printable(str3);

	if (i) {
		write(1,"str1 is printable\n",18);
	} else {
		write(1,"str2 is not printable\n",22);
	}

	if (j) {
                write(1,"str2 is printable\n",18);
        } else {
                write(1,"str2 is not printable\n",22);
        }

	if (k) {
                write(1,"str3 is printable\n",18);
        } else {
                write(1,"str3 is not printable\n",22);
        }

	return 0;
} */
