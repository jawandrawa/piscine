/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:29:30 by mtacunan          #+#    #+#             */
/*   Updated: 2021/08/16 16:29:32 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	aux1;

	aux1 = *a;
	*a = *b;
	*b = aux1;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}

int main ()
{
	int	cadena[6] = { 1,4,4,3,5,2} ;
	printf("%d %d %d %d %d %d\n",cadena[0],cadena[1],cadena[2],cadena[3],cadena[4],cadena[5]);
	ft_sort_int_tab(cadena,6);
	printf("%d %d %d %d %d %d ",cadena[0],cadena[1],cadena[2],cadena[3],cadena[4],cadena[5]);
}