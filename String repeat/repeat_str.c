/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   repeat_str.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:22:28 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:22:32 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *repeat_str(size_t count, const char *src) {
  char *result;

  result = calloc((strlen(src) * count) + 1, sizeof(char));
  while (count) {
    strcat(result, src);
    count--;
  }
  return result;
}
