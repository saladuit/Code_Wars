/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dna_strand.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:57:30 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:57:32 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

char *dna_strand(const char *dna)
{
  size_t i;
  size_t j;
  size_t len;
  char   *compl;
  
  if (!dna || !*dna)
    return (NULL);
  len = strlen(dna);
  compl = calloc(len, sizeof(char));
  if (!compl)
    return (NULL);
  i = 0;
  j = 0;
  while (i < len) {
    switch(dna[i]) {
        case 'A':
          compl[j] = 'T';
          break;
        case 'T':
          compl[j] = 'A';
          break;
        case 'C':
          compl[j] = 'G';
          break;
        case 'G':
          compl[j] = 'C';
          break;
        default:
          break;
    }
    i++;
    j++;
  }
    return (compl);
}
