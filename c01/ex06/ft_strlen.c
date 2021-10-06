/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 23:01:48 by mtacunan          #+#    #+#             */
/*   Updated: 2021/08/10 23:01:51 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int	ft_strlen(char *str)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (33 <= str[i] && str[i] <= 126)
	{	
		i++;
		len++;
	}
	return (len);
}

int main(){
	char *alejandra= "alejandra10";
	int a = ft_strlen(alejandra);
	printf("Longitud de alejandra10 (11) : %d\n", a );
}
