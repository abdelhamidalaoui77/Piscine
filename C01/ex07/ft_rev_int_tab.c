/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:45:36 by alamrani          #+#    #+#             */
/*   Updated: 2025/07/21 11:04:49 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	reverse;

	i = 0;
	while (i < size / 2)
	{
		reverse = tab[i];
		tab[i] = tab [size - 1 - i];
		tab [size - 1 - i] = reverse;
		i++;
	}
}
