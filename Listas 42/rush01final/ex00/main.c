/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 07:31:44 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/13 17:46:59 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdlib.h>

int	solve(int **tab, int *entry, int pos)
{
	int	size;

	if (pos == (SIZE * 4))
		return (1);
	size = 0;
	while (++size <= SIZE)
	{
		if (check_double(tab, pos, size) == 0)
		{
			tab[pos / SIZE][pos % SIZE] = size;
			if (check_case(tab, pos, entry) == 0)
			{
				if (solve(tab, entry, pos + 1) == 1)
					return (1);
			}
			else
				tab[pos / SIZE][pos % SIZE] = 0;
		}
	}
	return (0);
}

void	display_solution(int **tab)
{
	int	i;
	int	j;

	i = -1;
	while (++i < SIZE)
	{
		j = -1;
		while (++j < SIZE)
		{
			ft_putnbr(tab[i][j]);
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int	main(int argc, char *argv[])
{
	int	**tab;
	int	*entry;

	if (check(argc, argv) == 1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	entry = get_numbers(argv[1]);
	tab = ft_init(SIZE);
	if (tab != NULL)
	{
		if (solve(tab, entry, 0) == 1)
			display_solution(tab);
		else
			ft_putstr("Error\n");
		ft_destroy_tab(tab, entry, SIZE);
	}
	return (0);
}
