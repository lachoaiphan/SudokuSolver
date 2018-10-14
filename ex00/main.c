/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 12:49:27 by laphan            #+#    #+#             */
/*   Updated: 2018/09/30 13:43:53 by laphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "board.h"
#include "sudoku.h"

void	ft_display_error(void)
{
	char *err;

	err = "Error\n";
	while (*err != '\0')
		write(1, &(*err++), 1);
}

int		main(int argc, char **argv)
{
	char **board;

	if (argc != 10)
	{
		ft_display_error();
		return (0);
	}
	board = NULL;
	board = ft_allocate_board(argc, argv, board);
	if (ft_is_valid_board(board))
	{
		if (sudoku(board))
			ft_display_board(board);
		else
			ft_display_error();
	}
	else
		ft_display_error();
	ft_free_board(board);
	return (0);
}
