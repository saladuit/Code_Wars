/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   snail.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/04 13:57:18 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/10 15:04:06 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../include/snail.h"

// the goal is to loop through the 2D array and place all the indicies into 
// another array that we should return never duplicating and going clockwise

// the numbers of rows and cols are passed separately for historical reasons
//INPUT outsz = size of snail, mx matrix that sould be parsed,

//INPUT rows and cols form the size of the matrix
//there are 4 directions in our loop and these are played out in a fixed way:
//	right	= i++ while smaller than cols
//    make cols smaller by one to take in account that our square gets getting smaller
//	down	= j++ while smaller than rows
//    make rows smaller by one to take in account that our square gets getting smaller
//	left	= i-- while bigger than base_left
//    make base_left bigger by one to take in account that our square gets getting smaller
//	up		= j-- while bigger than base_up
//    make base_up bigger by one to take in account that our square gets getting smaller
//RETURN snail

static void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			*d;
	const int	*s;

	d = dest;
	s = src;
	if (!dest || !src)
		return (NULL);
	while (n)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (d);
}

int	*snail(size_t *outsz, const int **mx, size_t rows, size_t cols)
{
	int		*snail;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	snail_len;
	size_t	base_left;
	size_t	base_up;

	if (!mx || !rows || !cols)
		return (0);
	i = 0;
	j = 0;
	k = 0;
	base_up = 1;
	base_left = 0;
	snail_len = rows * cols;
	snail = calloc(snail_len + 1, sizeof(int));
	*outsz = snail_len;
	while (snail_len)
	{
		if (i == 0 && j == 0 && snail_len)
		{
			ft_memcpy(&snail[k], &mx[j][i], 1);
			snail_len--;
		}
		while (i < cols - 1 && snail_len)
		{
			i++;
			k++;
			ft_memcpy(&snail[k], &mx[j][i], 1);
			snail_len--;
		}
		cols--;
		while (j < rows - 1 && snail_len)
		{
			j++;
			k++;
			ft_memcpy(&snail[k], &mx[j][i], 1);
			snail_len--;
		}
		rows--;
		while (i > base_left && snail_len)
		{
			i--;
			k++;
			ft_memcpy(&snail[k], &mx[j][i], 1);
			snail_len--;
		}
		base_left++;
		while (j > base_up && snail_len)
		{
			j--;
			k++;
			ft_memcpy(&snail[k], &mx[j][i], 1);
			snail_len--;
		}
		base_up++;
		cr_log_warn("\nsnail_len: %ld\n", snail_len);
	}
	return (snail);
}
