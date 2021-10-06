/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:38:17 by mtacunan          #+#    #+#             */
/*   Updated: 2021/08/15 20:38:18 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
unsigned int	ft_strlcat	(char *dest, char *src, unsigned int size)
{

	int i = 0;
	int j = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < size -1)
	{
		dest[j+i]=src[j];
		j++;
	
	}
	dest[i+j-1]='\0';

	return (dest);
}

int main()
{
	char dest[5]="1234";
	char src[5]="abcd";

	printf("%d",strlcat(dest,src,6));
}
