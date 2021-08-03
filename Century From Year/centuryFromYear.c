/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   centuryFromYear.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:14:08 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:14:09 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int centuryFromYear(int year) 
{
  return ((year % 100 == 0) ? (year / 100) : (year / 100) + 1);
}
