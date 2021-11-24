/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                          |o_o || |                */
/*   Pulled from CodeWars.com                          +:+                    */
/*   Edidted By: safoh <safoh@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/04 12:55:48 by safoh         #+#    #+#                 */
/*   Updated: 2021/11/24 14:17:22 by safoh        \___)=(___/                 */
/*                                                                            */
/* ************************************************************************** */

#include "../include/SolvePuzzle.h"


int equal (int **puzzle, int expected[4][4])
{
  if (!puzzle || !expected)
	  	return 0;
  for (int i = 0; i < 4; ++i)
	  	if (memcmp (puzzle[i], expected[i], 4*sizeof (int)))
			return 0;
  return 1;
}

Test (_4_by_4_skyscrapers, should_pass_all_the_tests_provided)
{
    cr_assert (equal (SolvePuzzle (clues[0]), outcomes[0]));
    cr_assert (equal (SolvePuzzle (clues[1]), outcomes[1]));
}
