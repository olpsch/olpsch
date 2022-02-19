/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oschucho <oschucho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:41:00 by oschucho          #+#    #+#             */
/*   Updated: 2022/02/18 00:24:43 by oschucho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		if (str[index] <= 'z' && str[index] >= 'a')
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
