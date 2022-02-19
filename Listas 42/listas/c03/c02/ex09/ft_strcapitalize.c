/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oschucho <oschucho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:02:17 by oschucho          #+#    #+#             */
/*   Updated: 2022/02/18 00:59:56 by oschucho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_alpha(char b);
int		ft_char_is_numeric(char c);
void	ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	ft_strlowcase(str);
	while (str[index] != 0)
	{
		if (str[index] <= 'z' && str[index] >= 'a')
		{
			if (ft_char_is_alpha(str[index - 1]) == 0
				&& ft_char_is_numeric(str[index - 1]) == 0)
			{
				str[index] = str[index] - 32;
			}	
		}
		index++;
	}
	return (str);
}

int	ft_char_is_alpha(char b)
{
	if ((b <= 'z' && b >= 'a') || (b <= 'Z' && b >= 'A'))
		return (1);
	else
		return (0);
}

int	ft_char_is_numeric(char c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}

void	ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		if (str[index] <= 'Z' && str[index] >= 'A')
		{
			str[index] = str[index] + 32;
		}
		index++;
	}
}
