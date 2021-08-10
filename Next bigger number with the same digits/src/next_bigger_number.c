/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   next_bigger_number.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/10 15:20:48 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/10 16:43:13 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include <stddef.h>
# include <criterion/logging.h>
# include "../include/next_bigger_number.h"

// GOAL:
//Create a function that takes a positive integer and returns the next bigger 
//number that can be formed by rearranging its digits. For example:
//	12 ==> 21
//	513 ==> 531
//	2017 ==> 2071

//INPUT Number
//BREAK DOWN number in seperate array
//CHECK Each number from right to left whether right is bigger than left
//IF SO switch those and return final number
//OUTPUT Next Bigger Number

size_t	longlonglen(long long n)
{
	size_t i;

	i = 0;
	while(n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	*ntoar(int *array, long long n, size_t size)
{
	size_t i;

	i = 0;
while (i < size)
	{
		array[i] = n % 10;
		n /= 10;
		i++;
	}
	return (array);
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

long long	arton(int *buffer, size_t size)
{
	size_t i;
	long long number;
	long long mlpy;

	i = 0;
	mlpy = 1;
	number = 0;
	while (i < size)
	{
		number += buffer[i] * mlpy;
		cr_log_warn("\nnumber: %lld", number);
		i++;
		mlpy *= 10;
	}
	return (number);
}

long long	next_bigger_number(long long n)
{
	int *buffer;
	size_t num_len;
	size_t i;
	long long result;

	if (!n)
		return (n);
	if (n < 0)
		return (-1);
	if (n < 10)
		return (n);
	i = 0;
	num_len = longlonglen(n);
	cr_log_warn("\nnumlen: %ld", num_len);
	buffer = calloc(num_len + 1, sizeof(int));
	buffer = ntoar(buffer, n, num_len);
	while (i < num_len)
	{
		if (buffer[i] > buffer[i + 1])
		{
			cr_log_warn("\nbefor swap buffer:%d\nbefore swap buffer2:%d", buffer[i], buffer[i + 1]);
			swap(&buffer[i], &buffer[i + 1]);
			cr_log_warn("\nbuffer:%d\nbuffer2:%d", buffer[i], buffer[i + 1]);
			result = arton(buffer, num_len);
			free(buffer);
			cr_log_warn("\nresult:%lld", result);
			return (result);
		}
		cr_log_warn("%d", buffer[i]);
		i++;
	}
	free(buffer);
	return (n);
}
