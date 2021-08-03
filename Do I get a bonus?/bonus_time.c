/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bonus_time.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:04:35 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:04:42 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

typedef unsigned long long ull;

size_t salary_length(ull salary) {
  size_t i;
  
  i = 0;
  while (salary) {
  salary /= 10;
    i++;
  }
  return (i);
}
char *bonus_time(ull salary, bool bonus) {
  char* result;
  size_t len;
  size_t i;
  
  
  if (salary == 0)
    return ("$0");
  if (bonus) {
    salary *= 10;
  }
  len = salary_length(salary) + 1;
  printf("len: %zu\n", len);
  printf("salary: %llu\n", salary);
  result = calloc(len + 1, sizeof(char));
  i = 1;
  while (i < len) {
    result[len - 1] = salary % 10 + '0';
    salary /= 10;
    len--;
  }
  *result = '$';
  return (result);
}
