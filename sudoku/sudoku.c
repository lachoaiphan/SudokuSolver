/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 12:44:54 by laphan            #+#    #+#             */
/*   Updated: 2018/09/30 13:42:48 by laphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include "board.h"

int		ft_find_unassigned(char **b, int *i, int *j)
{
	*i = -1;
	while (++(*i) < 9)
	{
		*j = 0;
		while (b[*i][*j] != '\0')
		{
			if (b[*i][*j] == '.')
				return (1);
			(*j)++;
		}
	}
	return (0);
}

int		sudoku_solver(char **b, int i, int j, int d)
{
	while ((d >= 1 && d <= 9) && (i >= 0 && i <= 8) && (j >= 0 && j <= 8))
	{
		if (!ft_find_unassigned(b, &i, &j))
			return (1);
		b[i][j] = d + 48;
		if (ft_is_valid_num(b, i, j))
		{
			if (sudoku_solver(b, 0, 0, 1))
				return (1);
		}
		b[i][j] = '.';
		d++;
	}
	return (0);
}

int		sudoku(char **b)
{
	return (sudoku_solver(b, 0, 0, 1));
}
