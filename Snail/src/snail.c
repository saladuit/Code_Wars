/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   snail.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/04 13:57:18 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/09 19:01:42 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../include/snail.h"

// the numbers of rows and cols are passed separately for historical reasons
// the goal is to loop through the 2D array and place all the indicies into 
// another array that we should return never duplicating and going clockwise
//
//there are 4 directions in our loop and these are played out in a fixed way
//right	= i++ while smaller than cols
//down	= j++ while smaller than rows
//left	= i-- while bigger than base_left
//up	= j-- while bigger than base_up
//INPUT outsz = size of snail, mx matrix that sould be parsed,
//INPUT rows and cols form the size of the matrix
//
//static int	snail_up(const int **mx, size_t rows, size_t cols)
//{
//
//}
//
//static int	snail_left(const int **mx, size_t rows, size_t cols)
//{
//
//}
//
//static int	snail_down(const int **mx, size_t rows, size_t cols)
//{
//
//}

//static int	snail_right(const int **mx, size_t rows, size_t cols)
//{
//
//}

int	*snail(size_t *outsz, const int **mx, size_t rows, size_t cols)
{
	int	*snail;
	size_t	snail_len;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	base_left;
	size_t	base_up;


	if (!mx || !rows || !cols)
		return (0);
	i = 0;
	j = 0;
	base_up = 1;
	base_left = 0;
	snail_len = rows * cols;
	snail = calloc(snail_len + 1, sizeof(int));
	*outsz = snail_len;
	while (snail_len)
	{
		while (i < cols && snail_len)
		{
			snail[k] = mx[j][i];
			printf("i: %ld", i);
			i++;
			k++;
			snail_len--;
		}
		while (j < rows && snail_len)
		{
			snail[k] = mx[j][i];
			printf("j: %ld", j);
			j++;
			k++;
			snail_len--;
		}
		while (i > base_left && snail_len)
		{
			snail[k] = mx[j][i];
			printf("i: %ld", i);
			i--;
			k++;
			snail_len--;
		}
		while (j > base_up && snail_len)
		{
			snail[k] = mx[j][i];
			printf("j: %ld", j);
			j--;
			k++;
			snail_len--;
		}
	}
	return (snail);
}
