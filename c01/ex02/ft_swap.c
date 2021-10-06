/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 22:07:52 by mtacunan          #+#    #+#             */
/*   Updated: 2021/08/10 22:14:30 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void	ft_swap(int *a, int *b)
{
	int	aux1;

	aux1 = *a;
	*a = *b;
	*b = aux1;
}
int main()
{
	int a = 42 ;
	int b = 3;
	printf("valor inicial a:%d | b:%d\n", a ,b);
	ft_swap(&a , &b );
	printf("valor final   a:%d | b:%d\n", a ,b);
}
