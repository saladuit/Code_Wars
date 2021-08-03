/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_count.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:02:38 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:02:40 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t get_count(const char *s)
{
  size_t i;
  size_t result;
  
  i = 0;
  result = 0;
  while (s[i] != '\0') {
    if (s[i] == 'a' || s[i] == 'u' || s[i] == 'o' || s[i] == 'i' || s[i] == 'e' ) {
      result++; 
    }
    i++;
  }
    return (result);
}
