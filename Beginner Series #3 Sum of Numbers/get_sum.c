/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_sum.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:56:57 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:57:01 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int get_sum(int a , int b) {
  int result;
  
  result = 0;
  if (a < b) {
    while (a <= b) {
    result += a;
    a++;
    }
    return (result);
  }
  if (b < a) {
    while ( b <= a) {
      result += b;
      b++;
    }
    return (result);
  }
  if (a == b)
    return (a);
  return (0);
}
