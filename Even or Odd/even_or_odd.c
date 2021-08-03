/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   even_or_odd.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:11:27 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:11:28 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

const char * even_or_odd(int number);

const char *even_or_odd(int number) {
  return (number & 1) ? ("Odd") : ("Even");
}
