/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 20:44:13 by alamrani          #+#    #+#             */
/*   Updated: 2025/08/02 21:31:08 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	i = 1;
	factorial = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		while (i <= nb)
		{
			factorial *= i;
			i++;
		}
	}
	return (factorial);
}
