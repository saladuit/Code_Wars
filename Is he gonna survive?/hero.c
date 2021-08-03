/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hero.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:03:39 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:03:53 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdint.h>

bool hero(uint32_t bullets, uint32_t dragons);

bool hero(uint32_t bullets, uint32_t dragons) {
  int sign;
  
  if((bullets / dragons) > 1)
    return (true);
  else
    return (false);
}
