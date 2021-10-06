/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 23:05:56 by mtacunan          #+#    #+#             */
/*   Updated: 2021/08/10 23:05:59 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux ;

	j = size - 1;
	i = 0;
	while (i < size / 2)
	{
		aux = tab[i];
		tab[i] = tab[j];
		tab[j] = aux ;
		i++;
		j--;
	}
}
int main(void)
{
	int matriz[5] = {3,8,7,6,5};

	int size1 =  5;
	printf( "ANTES :   %d %d %d %d %d\n",matriz[0],matriz[1],matriz[2],matriz[3],matriz[4]);
	ft_rev_int_tab(matriz,size1);

	printf( "DESPUES : %d %d %d %d %d\n",matriz[0],matriz[1],matriz[2],matriz[3],matriz[4]);

	printf( "\ncaso 2: \n");
	int matriz2[4] = {0,1,2,3};

	int size2 =  4;
	printf( "ANTES :   %d %d %d %d\n",matriz2[0],matriz2[1],matriz2[2],matriz2[3]);
	ft_rev_int_tab(matriz2,size2);

	printf( "DESPUES : %d %d %d %d\n",matriz2[0],matriz2[1],matriz2[2],matriz2[3]);
}
