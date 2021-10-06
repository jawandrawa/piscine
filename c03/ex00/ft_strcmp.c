/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 23:28:54 by mtacunan          #+#    #+#             */
/*   Updated: 2021/08/11 23:28:58 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
int ft_strcmp( char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s1[i] != '\0')
	{
		i++;
	}
	while(s2[j] != '\0')
	{
		j++;
	}
	return i-j;
}

int	main(void)
{
	char *s1 = "abcd";
	char *s2 = "abcdef";
	printf("%d", ft_strcmp(s1,s2));
}
