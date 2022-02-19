/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oschucho <oschucho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:27:10 by oschucho          #+#    #+#             */
/*   Updated: 2022/02/16 00:52:08 by oschucho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	mid;

	i = 0;
	mid = size / 2;
	while (i < mid)
	{
	tmp = *(tab + i);
	*(tab + i) = *(tab + size - 1 - i);
	*(tab + size - 1 - i) = tmp;
	i++;
	}
}
