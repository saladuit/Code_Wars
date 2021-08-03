/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sum_two_smallest_numbers.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:50:08 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:50:10 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

static void ft_swap(int *ax, int *bx) {
  int tmp;
  
  tmp = *ax;
  *ax = *bx;
  *bx = tmp;
  return ;
}

static  void ft_sort(int *buffer, size_t n) {
  size_t i;
  
  i = 0;
  while (n) {
    i = 0;
    while (i < n - 1) {
      if (buffer[i] > buffer[i + 1])
        ft_swap(&buffer[i], &buffer[i + 1]);
      i++;
    }
    n--;
  }
  return ;
}
static  int *ft_intdup(const int *numbers, size_t n) {
  int *buffer;
  size_t i;
  
  i = 0;
  buffer = (int *)calloc(n + 1, sizeof(int));
  while (i < n) {
    buffer[i] = numbers[i];
    i++;
  }
  return (buffer);
}

unsigned long long sum_two_smallest_numbers(size_t n, const int *numbers) {
  unsigned long long result;
  size_t i;
  int *buffer;
  
  i = 0;
  result = 0;
  buffer = NULL;
  buffer = ft_intdup(numbers, n);
  ft_sort(buffer, n);
  result += buffer[i];
  result += buffer[i + 1];
    return (result);
}
