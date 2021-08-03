/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   remove_char.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:14:10 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:14:14 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char* remove_char(char* dst, const char* src)
{
  int i;
  int j;
  int n;
  
  i = 0;
  j = 0;
  while (src[i])
  {
    i++;
  }
  n = i;
  i = 1;
  while (i < n - 1)
    {
    dst[j] = src[i];
    i++;
    j++;
  }
  dst[j] = '\0';
  return (dst);
}
