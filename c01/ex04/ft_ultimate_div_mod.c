/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 22:23:22 by mtacunan          #+#    #+#             */
/*   Updated: 2021/08/10 22:26:50 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_value;
	int	b_value;

	a_value = *a ;
	b_value = *b ;
	*a = a_value / b_value;
	*b = a_value % b_value;
}
int main()
{
	int n1 = 11;
	int n2 = 2;
	printf("operación : %d / %d\n", n1,n2);
	ft_ultimate_div_mod(&n1,&n2);
	printf("La division es : %d\n", n1);
	printf("EL cociente es : %d\n", n2);
}
