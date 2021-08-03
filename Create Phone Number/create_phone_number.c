/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_phone_number.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:47:57 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:48:00 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//change the integers to a single string literal with corresponding characters

//input string that consists of 10 characters
//we'll first need to create a bufer with all the integers converted to characters
//then we can allocate some memory for the string/(adress to that string) that sould be returned
//while result[i] do i++;
//if i == 0 
//assign '(' to result
//if i == 4
//assign ')' to result
//if i == 5
//assign ' ' to result
//if i == 9 
//assign - to result
//return result

char *create_phone_number(char phnum[15], const unsigned char nums[10])
{
  size_t i;
  size_t j;
  
  i = 0;
  j = 0;
  while (i < 14) {
    if (i == 0)
      phnum[i] = '(';
    else if (i == 4)
      phnum[i] = ')';
    else if (i == 5)
      phnum[i] = ' ';
    else if (i == 9)
      phnum[i] = '-';
    else {
      phnum[i] = nums[j] + 48;
      j++;
    }
    i++;
  }
  return (phnum);
}
