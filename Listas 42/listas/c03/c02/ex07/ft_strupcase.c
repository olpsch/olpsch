/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oschucho <oschucho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:48:21 by oschucho          #+#    #+#             */
/*   Updated: 2022/02/18 00:46:27 by oschucho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		if (str[index] <= 'z' && str[index] >= 'a')
		{
			str[index] = str[index] - 32;
		}
		index++;
	}
	return (str);
}
