/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bool_to_word.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:16:48 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:16:49 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


const char *bool_to_word (int value);

const char * bool_to_word (int value) {
  if (value == 1)
    return ("Yes");
  else if (value == 0)
    return ("No");
}
