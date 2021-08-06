/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   snail.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/04 13:57:18 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/06 15:23:02 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../include/snail.h"

// the numbers of rows and cols are passed separately for historical reasons
// we get
int *snail(size_t *outsz, const int **mx, size_t rows, size_t cols) {
  if (!mx || rows || cols)
	return (0);
  return (int *)(*outsz = 0);
}
