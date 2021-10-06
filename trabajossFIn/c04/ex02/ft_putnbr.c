/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:54:14 by mtacunan          #+#    #+#             */
/*   Updated: 2021/08/26 16:06:16 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

int	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		return (-1);
	}
	return (1);
}

void	ft_putnbr(int	nb)
{
	int				i[10];
	unsigned int	n;
	int				j;

	n = ft_is_negative(nb) * nb;
	if (n == 0)
		ft_putchar('-');
	j = 0;
	while (n != 0)
	{
		i[j] = n % 10;
		n = n / 10;
		j++;
	}
	while (j > 0)
	{
		j--;
		ft_putchar((char)(i[j] + '0'));
	}
}
