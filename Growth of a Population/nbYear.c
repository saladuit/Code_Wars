/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   nbYear.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:56:31 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:56:33 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int nbYear(int p0, double percent, int aug, int p) {
  int year;
  
  year = 0;
  while (p0 < p) {
    p0 += p0 * (percent / 100) + aug;
    year++;
  }
  return (year);
}
