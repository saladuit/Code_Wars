/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   basic_op.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:13:11 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:13:13 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int basic_op(char op, int value1, int value2) {
  switch (op) {
      case '+':
        return (value1 + value2);
      case '-':
        return (value1 - value2);
      case '*':
        return (value1 * value2);
      case '/':
        return (value1 / value2);
  }
  return 0;
}
