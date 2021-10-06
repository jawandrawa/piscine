/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:47:54 by mtacunan          #+#    #+#             */
/*   Updated: 2021/08/26 16:06:31 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char	str)
{
	int	valid;

	valid = 1;
	if (str == '\t' || str == '\n' || str == '\v' || str == '\f'
		|| str == '\r' || str == ' ')
		valid = 1 ;
	else
		valid = 0;
	return (valid);
}

int	ft_atoi(char *str)
{
	int	num;
	int	sign;
	int	i;

	i = 0;
	num = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * sign);
}
