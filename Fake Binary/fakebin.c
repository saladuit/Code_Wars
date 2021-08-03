/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fakebin.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:08:44 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:08:46 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

void fakeBin(const char *digits, char *buffer) {
  // Please place result in the memory pointed toh by
  // the buffer parameter. Buffer has enough memory to
  // accommodate the answer as well as the null-terminating
  // character.
  size_t i;
  size_t len;
  
  i = 0;
  len = strlen(digits);
  printf("%zu\n", len);
  while (i < len) {
    if (digits[i] < '5' && digits[i] >= '0') 
      buffer[i] = '0';
    else if (digits[i] >= '5' && digits[i] <= '9')
      buffer[i] = '1';
  printf("i = %zu\n", i);
    i++;
  }
  buffer[len] = '\0';
  puts(digits);
 
