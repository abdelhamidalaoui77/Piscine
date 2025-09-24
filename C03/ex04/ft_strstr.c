/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:55:44 by alamrani          #+#    #+#             */
/*   Updated: 2025/08/05 10:52:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!*to_find)
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j] && to_find[j])
		{
			j++;
		}
		if (!to_find[j])
			return (&str[i]);
		i++;
		j = 0;
	}
	return (0);
}
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!*to_find)
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j])
		{
			if (str[i + j] != to_find[j])
				break ;
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
