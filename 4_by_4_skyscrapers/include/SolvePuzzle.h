/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SolvePuzzle.h                                   |o_o || |                */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/04 14:44:57 by safoh         #+#    #+#                 */
/*   Updated: 2021/11/24 14:16:48 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVEPUZZLE_H
# define SOLVEPUZZLE_H
# include <criterion/criterion.h>
# include <stddef.h>
# include <limits.h>
# include <stdio.h>

static int clues[][16] = {
{
	2, 2, 1, 3,
  	2, 2, 3, 1,
  	1, 2, 2, 3,
  	3, 2, 1, 3 },
{
	0, 0, 1, 2,
  	0, 2, 0, 0,
  	0, 3, 0, 0,
  	0, 1, 0, 0 }
};

int outcomes[][4][4] = {
{
	{ 1, 3, 4, 2 },
  	{ 4, 2, 1, 3 },
  	{ 3, 4, 2, 1 },
  	{ 2, 1, 3, 4 }
},
{
	{ 2, 1, 4, 3 },
  	{ 3, 4, 1, 2 },
  	{ 4, 2, 3, 1 },
  	{ 1, 3, 2, 4 }
}
};

int** SolvePuzzle (int *clues);

#endif
