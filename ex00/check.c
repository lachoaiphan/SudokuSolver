/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 12:37:21 by laphan            #+#    #+#             */
/*   Updated: 2018/09/30 13:40:42 by laphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

int		ft_check_len_char(char **b)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (b[i][j] != '\0')
		{
			if ((b[i][j] >= '1' && b[i][j] <= '9') || b[i][j] == '.')
				j++;
			else
				return (0);
		}
		if (j != 9)
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_row(char **b, char ch, int r, int a)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (ch == b[r][j] && j != a)
			return (0);
		j++;
	}
	return (1);
}

int		ft_check_col(char **b, char ch, int c, int a)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (ch == b[i][c] && i != a)
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_square(char **b, char ch, int ind)
{
	int i;
	int j;
	int bx;
	int by;

	bx = ind / 9;
	by = ind % 9;
	while ((bx % 3) != 0)
		bx--;
	while ((by % 3) != 0)
		by--;
	i = bx + 2;
	j = by + 2;
	by -= 1;
	while (bx <= i && ++by <= j)
	{
		if (ch == b[bx][by] && bx != (ind / 9) && by != (ind % 9))
			return (0);
		if (bx <= i && by >= j)
		{
			by -= 3;
			bx++;
		}
	}
	return (1);
}
