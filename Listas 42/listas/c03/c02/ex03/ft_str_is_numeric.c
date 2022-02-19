/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oschucho <oschucho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:17:07 by oschucho          #+#    #+#             */
/*   Updated: 2022/02/18 00:20:23 by oschucho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		index;

	index = 0;
	while (str[index] != 0)
	{
		if (str[index] <= 57 && str[index] >= 48)
		{
			index++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
