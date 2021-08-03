/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IsIsogram.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:59:26 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:59:30 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

static  bool ft_isduplicate(char c, size_t i, char *str, size_t len) {
  while (i < len) {
    if (str[i] == c || str[i] == c - 32)
      return (true);
    i++;
  }
  return (false);
}
static  bool ft_isdigit(char c) {
  if ( c >= '0' && c <= '9')
    return (true);
  else
    return (false);
}

static  size_t ft_strlen(char *str) {
  size_t i;
  
  i = 0;
  while (str[i] != '\0') {
   i++; 
  }
  return (i);
}

bool IsIsogram(char *str) 
{
  size_t i;
  size_t len;
  
  puts(str);
  len = ft_strlen(str);
  i = 0;
  printf("\nstring:\n");
  while (i < len) {
    printf("%c\n", str[i]);
    if (ft_isdigit(str[i]))
      return (false);
    if (ft_isduplicate(str[i], i + 1, str, len))
      return (false);
    i++;
  }
  return (true);
}
