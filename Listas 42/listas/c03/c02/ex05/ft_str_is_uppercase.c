/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oschucho <oschucho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:07:01 by oschucho          #+#    #+#             */
/*   Updated: 2022/02/18 00:28:05 by oschucho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		if (str[index] <= 90 && str[index] >= 65)
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
