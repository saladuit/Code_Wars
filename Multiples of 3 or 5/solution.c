/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   solution.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:56:02 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:56:08 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int solution(int number) {
  int result;
  
  result = 0;
  if (number < 0)
      return (0);
  while (number) {
    number--;
    if (number % 5 == 0 || number % 3 == 0)
      result += number;
  } 
  return (result);
}
