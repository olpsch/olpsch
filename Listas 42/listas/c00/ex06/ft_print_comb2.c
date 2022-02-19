/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oschucho <oschucho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 22:46:10 by oschucho          #+#    #+#             */
/*   Updated: 2022/02/10 01:42:43 by oschucho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar (a / 10 + 48);
			ft_putchar (a % 10 + 48);
			ft_putchar (' ');
			ft_putchar (b / 10 + 48);
			ft_putchar (b % 10 + 48);
			if (!(a == 98 && b == 99))
				write (1, ", ", 3);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
}