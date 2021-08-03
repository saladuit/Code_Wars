/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   persistence.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:53:10 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:53:25 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int nbr_size(int n) {
  int size;
  
  size = 0;
  while (n) {
    n = n / 10;
    size++;
  }
  return (size);
}

int persCalc(int *modSave, int len) {
  int result;
  int i;
  
  i = 0;
  result = 1;
  while (i < len) {
    result *= modSave[i];
    i++;
  }
  return (result);
}

int *modInit(int len, int n) {
  int *modSave;
  size_t i;
  
  i = 0;
  modSave = calloc(len + 1, sizeof(int));
  while (n) {
    modSave[i] = n % 10;
    n /= 10;
    i++;
  }
  return (modSave);
}

int persistence(int n) {
  int len;
  int *modSave; 
  int count;
  
  printf("\nnumber: %d\n", n);
  if (n < 10)
    return (0);
  count = 0;
  while (n) {
    len = nbr_size(n);
    modSave = modInit(len, n);
    n = persCalc(modSave, len);
    printf("%d\n", n);
    count++;
    if (n < 10)
      break ;
  }
  printf("count: %d\n", count);
  return (count);
}
