/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:51:37 by mtacunan          #+#    #+#             */
/*   Updated: 2021/08/16 16:51:39 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42 ;
}

int main()
{
	int a = 3;
	printf("valor de a original :%d\n",a);
	ft_ft(&a); 
	printf("valor de a final :%d\n",a);

}