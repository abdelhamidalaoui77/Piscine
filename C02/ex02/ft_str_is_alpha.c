/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 11:38:20 by alamrani          #+#    #+#             */
/*   Updated: 2025/07/24 15:35:31 by alamrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main()
{

	int istrue, istrue2, istrue3;
	char str1[] = "hello, y0u;)";
	char str2[] = "just hello";
	char str3[] = "";
	char alpha[]  = "the string is alphabetic";
	char isnotalpha[] = "the string is not alphabetic";
	istrue = ft_str_is_alpha(str1);
	istrue2 = ft_str_is_alpha(str2);
	istrue3 = ft_str_is_alpha(str3);
	if (istrue){
		int i = 0;
		while (alpha[i] != '\0'){
			write(1,&alpha[i],1);
			i++;
		}
		write(1,"\n",1);
	} else {
		int j = 0 ;
		while (isnotalpha[j] != '\0'){
			write(1,&isnotalpha[j],1);
			j++;
		}
		write(1,"\n",1);
	}

	if (istrue2){
                int i = 0;
                while (alpha[i] != '\0'){
                        write(1,&alpha[i],1);
                        i++;
                }
                write(1,"\n",1);
        } else {
                int j = 0 ;
                while (isnotalpha[j] != '\0'){
                        write(1,&isnotalpha[j],1);
                        j++;
                }
                write(1,"\n",1);
        }
	
	if (istrue3)
		write(1,"true\n",5);
	else
		write(1,"false\n",5);
	return 0;
} */
