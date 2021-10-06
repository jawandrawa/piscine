/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:36:42 by mtacunan          #+#    #+#             */
/*   Updated: 2021/08/26 17:41:06 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (base[len] != '\0')
	{
		len++;
	}
	if (nbr >= len)
	{
		ft_putnbr_base(nbr / len, base);
		ft_putnbr_base(nbr % len, base);
	}
	else
		write (1, &base[nbr % len], 1);
}
