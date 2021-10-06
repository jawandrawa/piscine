/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 22:53:20 by mtacunan          #+#    #+#             */
/*   Updated: 2021/08/10 22:53:22 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (33 <= str[i] && str[i] <= 126)
	{	
		write(1, &str[i], 1);
		i++;
	}
}

int main ()
{
	char *alejandra= "alejan92!dra";
	ft_putstr(alejandra);
}
