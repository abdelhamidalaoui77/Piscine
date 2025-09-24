/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:56:21 by alamrani          #+#    #+#             */
/*   Updated: 2025/08/07 03:01:54 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	tab = malloc(size * sizeof(int));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
