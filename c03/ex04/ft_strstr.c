/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 04:47:11 by mtacunan          #+#    #+#             */
/*   Updated: 2021/08/14 04:47:13 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
/*char	*ft_strstr(char *str, char *to_find)
{
	int pos = 0;
	int size = 0;
	int i = 0;
	int j = 0;

	while (to_find[size] 1= '\0')
		size++;
	while(str[i] != '\0')
	{
		while (j <= size)
		{
			if( str[i] != to_find[j])
			{
				i++;
				j=0;
				pos = 1;
			}
		}
	}
}*/

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			++j;
		}
		++i;
	}
	return (0);
}

int	main(void)
{
	char s1[] = "alejandra";
	char s2[] = "jan";
	printf("%s", ft_strstr(s1,s2));
}