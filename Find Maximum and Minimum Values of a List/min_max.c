/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   min_max.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:00:17 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:00:20 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
int min(int* array, int len)
{  
  long long min;
  int i;
  
  i = 0;
  printf("\n min array:\n");
  while (i < len) {
    printf("%d\n", array[i]);
    i++;
  }
  i = 0;
  printf("\nmin:\n");
  min = array[0];
  while (i < len) {
    if (min > (long long)array[i])
      min = (long long)array[i];
    printf("%lld\n", min);
    i++;
  }
  return min;
}

int max(int* array, int len)
{
  long long max;
  int i;
  
  max = array[0];
  i = 0;
  printf("\n max array:\n");
  while (i < len) {
    printf("%d\n", array[i]);
    i++;
  }
  i = 0;
  while (i < len) {
    if (max < (long long)array[i])
      max = (long long)array[i];
    i++;
  }
  printf("\nmax:");
  printf("%lld\n", max);
  return max;
}
