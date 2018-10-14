/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 12:54:07 by laphan            #+#    #+#             */
/*   Updated: 2018/09/30 13:09:53 by laphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOARD_H
# define BOARD_H

void	ft_display_board(char **b);
int		ft_is_valid_num(char **b, int i, int j);
int		ft_is_valid_board(char **b);
char	**ft_allocate_board(int argc, char **argv, char **board);
char	**ft_free_board(char **board);

#endif
