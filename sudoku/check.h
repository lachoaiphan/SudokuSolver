/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 12:57:12 by laphan            #+#    #+#             */
/*   Updated: 2018/09/30 12:59:08 by laphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H

int		ft_check_len_char(char **b);
int		ft_check_row(char **b, char ch, int r, int a);
int		ft_check_col(char **b, char ch, int c, int a);
int		ft_check_square(char **b, char ch, int ind);

#endif
