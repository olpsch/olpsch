/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 07:37:57 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/13 07:37:58 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	check_double(int **tab, int pos, int size)
{
	int	i;

	i = -1;
	while (++i < pos / SIZE)
		if (tab[i][pos % SIZE] == size)
			return (1);
	i = -1;
	while (++i < pos % SIZE)
		if (tab[pos / SIZE][i] == size)
			return (1);
	return (0);
}

int	check_col_up(int **tab, int pos, int *entry)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / SIZE == 3)
	{
		while (i < SIZE)
		{
			if (tab[i][pos % SIZE] > max)
			{
				max = tab[i][pos % SIZE];
				count++;
			}
			i++;
		}
		if (entry[pos % SIZE] != count)
			return (1);
	}
	return (0);
}

int	check_row_right(int **tab, int pos, int *entry)
{
	int	i;
	int	max_size;
	int	visible_towers;

	i = SIZE;
	max_size = 0;
	visible_towers = 0;
	if (pos % SIZE == 3)
	{
		while (--i >= 0)
		{
			if (tab[pos / SIZE][i] > max_size)
			{
				max_size = tab[pos / SIZE][i];
				visible_towers++;
			}
		}
		if (entry[12 + pos / SIZE] != visible_towers)
			return (1);
	}
	return (0);
}

int	check_col_down(int **tab, int pos, int *entry)
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	if (pos / SIZE == 3)
	{
		while (i >= 0)
		{
			if (tab[i][pos % SIZE] > max)
			{
				max = tab[i][pos % SIZE];
				count++;
			}
			i--;
		}
		if (entry[SIZE + pos % SIZE] != count)
			return (1);
	}
	return (0);
}

int	check_row_left(int **tab, int pos, int *entry)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos % SIZE == 3)
	{
		while (i < SIZE)
		{
			if (tab[pos / SIZE][i] > max)
			{
				max = tab[pos / SIZE][i];
				count++;
			}
			i++;
		}
		if (entry[8 + pos / SIZE] != count)
			return (1);
	}
	return (0);
}
