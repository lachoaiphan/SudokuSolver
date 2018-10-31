/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 12:59:27 by laphan            #+#    #+#             */
/*   Updated: 2018/09/30 13:44:40 by laphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

int		ft_find_unassigned(char **b, int *i, int *j);
int		sudoku_solver(char **b, int i, int j, int d);
int		sudoku(char **b);

#endif
