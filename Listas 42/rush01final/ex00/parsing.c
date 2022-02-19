/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 07:38:01 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/13 17:47:29 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdlib.h>

int	check(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	if (ft_strlen(argv[1]) != 31)
		return (1);
	return (0);
}

int	*get_numbers(char *str)
{
	int	i;
	int	j;
	int	*tab;

	tab = malloc(sizeof(int) * (SIZE * 4));
	if (!tab)
		return (0);
	i = -1;
	j = 0;
	while (str[++i])
		if (str[i] >= '0' && str[i] <= '9')
			tab[j++] = ft_atoi(str + i);
	return (tab);
}

int	ft_init_fill(int **tab, int size)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	while (a < size)
	{
		while (b <= size)
			tab[a][b++] = 0;
		b = 1;
		a++;
	}
	return (1);
}

int	**ft_init(int size)
{
	int	**tab;
	int	a;

	a = 0;
	tab = malloc(sizeof(int *) * size);
	while (a < size)
		tab[a++] = malloc(sizeof(int *) * size);
	if (ft_init_fill(tab, size))
		return (tab);
	return (NULL);
}

void	ft_destroy_tab(int **tab, int *entry, int size)
{
	while (size--)
		free(tab[size]);
	free(tab);
	free(entry);
}
