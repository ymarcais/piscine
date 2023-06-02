/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 09:49:19 by lgirault          #+#    #+#             */
/*   Updated: 2022/08/28 21:55:48 by lgirault         ###   ########.fr       */
/*   Updated: 2022/08/28 19:02:51 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

int		ft_strlen(char *nbr);
char	**nbr_table(char **argv, int e);
void	cut3(char *str, char **tab);
void	cut3_part2(char *str, char **tab, int i, int size);
void	ft_print_0_999(char *nbr, char **data);
void	more_hundred2(char **data, int size);
void	ft_putstr_word(char *tab);
void	ft_putchar(char c);
void	print_all_number(char **data, char **argv, int e);
void	ft_print_digit(char **data, int ind, int space);
void	ft_data_maker(char **data, char *container, int len);
void	ft_insert_data(char **data, char *container, int beg, int pos);
int		check_dict(char *container);
int		contrl(char *str, int i);
int		ft_mid(char *container, int pos, int checker);
int		contrl2(char *str, int i);
int		ft_dict_row(char *container);

#endif
