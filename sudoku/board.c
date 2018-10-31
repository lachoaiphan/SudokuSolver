/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 12:20:42 by laphan            #+#    #+#             */
/*   Updated: 2018/09/30 13:32:00 by laphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "board.h"
#include "check.h"

void	ft_display_board(char **b)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (b[i][j] != '\0')
		{
			write(1, &(b[i][j++]), 1);
			if (j <= 8)
				write(1, " ", 1);
		}
		i++;
		write(1, "\n", 1);
	}
}

int		ft_is_valid_num(char **b, int i, int j)
{
	if (ft_check_row(b, b[i][j], i, j) &&
			ft_check_col(b, b[i][j], j, i) &&
			ft_check_square(b, b[i][j], j + i * 9))
		return (1);
	return (0);
}

int		ft_is_valid_board(char **b)
{
	int i;
	int j;
	int given;

	given = 0;
	if (!ft_check_len_char(b))
		return (0);
	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (b[i][++j] != '\0')
		{
			if (b[i][j] != '.')
			{
				if (!ft_is_valid_num(b, i, j))
					return (0);
				given++;
			}
		}
	}
	if (given < 17)
		return (0);
	return (1);
}

char	**ft_allocate_board(int argc, char **argv, char **board)
{
	int i;
	int j;

	i = 0;
	board = (char **)malloc(sizeof(char *) * (argc - 1));
	while (i < argc - 1)
		board[i++] = (char *)malloc(sizeof(char) * 10);
	i = -1;
	while (++i < argc - 1)
	{
		j = -1;
		while (argv[i + 1][++j] != '\0')
			board[i][j] = argv[i + 1][j];
		board[i][j] = '\0';
	}
	return (board);
}

char	**ft_free_board(char **board)
{
	int i;

	i = 0;
	while (i < 9)
		free(board[i++]);
	free(board);
	return (board);
}
