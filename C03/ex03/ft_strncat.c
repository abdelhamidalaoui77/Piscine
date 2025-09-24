/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:44:07 by alamrani          #+#    #+#             */
/*   Updated: 2025/07/26 22:42:50 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	i;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(){
	char src[] = " hamid , i know you got the potential , i really do !!!";
	char dest[200] = "hello";
	unsigned int nb = 37;
	ft_strncat(dest,src,nb);
	int i = 0;
	while (dest[i] != '\0')
	{
		write(1,&dest[i],1);
		i++;
	}
}
*/
