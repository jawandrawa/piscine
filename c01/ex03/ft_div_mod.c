/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 22:15:24 by mtacunan          #+#    #+#             */
/*   Updated: 2021/08/10 22:21:54 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void	ft_div_mod( int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int main()
{
	int div=0;
	int mod=0;


	int a = 11;
	int b = 2;

	ft_div_mod(a,b, &div, &mod);
	printf("operación : %d / %d\n", a,b);
	printf("división : %d\n", div);
	printf("módulo : %d\n", mod );
	
}
