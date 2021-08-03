/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sum.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:08:22 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:08:23 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int sum(int* numbers, int numbersCount)
{
  int high;
  int low;
  short lsign = 0;
  short hsign= 0;
  int result;
  int i = 0;
  
  high = numbers[i];
  low = numbers[i];
  i = 0;
  while (i < numbersCount) {
    printf("numbers: %d\n", numbers[i]);
    if (numbers[i] <= low) {
      low = numbers[i];
    }
    if (numbers[i] >= high)
      high = numbers[i];
    i++;
  }
  i = 0;
  result = 0;
  while (i < numbersCount) {
    if (numbers[i] == high && hsign == 1)
      result += numbers[i];
    if (numbers[i] == low && lsign == 1)
      result += numbers[i];
    if (numbers[i] != high && numbers[i] != low) {
      result += numbers[i];
    }
    if (numbers[i] == high)
      hsign = 1;
    if (numbers[i] == low)
      lsign = 1;
    i++;
  printf("result: %d\n", result);
  }
  printf("high: %d\n", high);
  printf("low: %d\n", low);
  return (result);
}
