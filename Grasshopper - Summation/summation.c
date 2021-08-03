/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   summation.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:16:36 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:16:43 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int summation(int num)
{
  int result;
  
  result = 0;
  while (num)
    {
    result += num;
    num--;
  }
  return result;
}
