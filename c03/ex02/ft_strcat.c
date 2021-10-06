/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 04:16:06 by mtacunan          #+#    #+#             */
/*   Updated: 2021/08/14 04:16:07 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
char	*ft_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
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
	printf("%s", ft_strcat(s1,s2));
}
