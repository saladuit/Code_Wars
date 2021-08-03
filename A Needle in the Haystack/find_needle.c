/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_needle.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:12:45 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:12:46 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *find_needle(const char **haystack, size_t count);

int  count_size(int i) {
  size_t size;
  
  size = 0;
  while (i) {
    i /= 10;
    size++;
  }
  return (size + 31);
}

char  *find_needle(const char **haystack, size_t count) {
  size_t i;
  char  *str;
  size_t size;
  char *needle = "needle";
  
  i = 0;
  while (count > i) {
    if (strcmp(needle, haystack[i]) == 0)
      break ;
    else
      i++;
  }
  size = count_size(i);
  str = calloc(size, sizeof(char));
  snprintf(str, size, "found the needle at position %zu", i);
  return (str);
}
