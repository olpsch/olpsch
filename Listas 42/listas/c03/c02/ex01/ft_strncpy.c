/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oschucho <oschucho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:56:48 by oschucho          #+#    #+#             */
/*   Updated: 2022/02/18 18:04:23 by oschucho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index <= n - 1 && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index <= n - 1)
	{
		dest[index] = '\0';
		index ++;
	}	
	return (dest);
}
