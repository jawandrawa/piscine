/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 04:03:59 by mtacunan          #+#    #+#             */
/*   Updated: 2021/08/14 04:04:00 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s1[i] != '\0' && i < n)
	{
		i++;
	}
	while(s2[j] != '\0' && j < n)
	{
		j++;
	}
	return i-j;
}
int	main(void)
{
	char *s1 = "abcd";
	char *s2 = "abcdefgh";
	printf("%d", ft_strncmp(s1,s2,6));
}
