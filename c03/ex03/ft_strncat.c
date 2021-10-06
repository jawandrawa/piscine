/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 04:43:34 by mtacunan          #+#    #+#             */
/*   Updated: 2021/08/14 04:43:35 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i = 0;
	int j = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[j+i]=src[j];
		j++;
	
	}
	dest[i+j]='\0';

	return (dest);
}
int	main(void)
{
	char s1[] = "abcd";
	char s2[] = "123";
	printf("%s", ft_strncat(s1,s2,1));
}
