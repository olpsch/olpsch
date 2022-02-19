/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 07:32:06 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/13 17:48:08 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H
# define SIZE 4

int		check_case(int **tab, int pos, int *entry);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		solve(int **tab, int *entry, int pos);
void	display_solution(int **tab);
int		check(int argc, char *argv[]);
int		*get_numbers(char *str);
int		ft_init_fill(int **tab, int size);
int		**ft_init(int size);
void	ft_destroy_tab(int **tab, int *entry, int size);
int		check_double(int **tab, int pos, int num);
int		check_col_up(int **tab, int pos, int *entry);
int		check_row_right(int **tab, int pos, int *entry);
int		check_col_down(int **tab, int pos, int *entry);
int		check_row_left(int **tab, int pos, int *entry);

#endif