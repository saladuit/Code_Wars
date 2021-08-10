/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*   Pulled from CodeWars.com                          +:+                    */
/*   Edidted By: safoh <safoh@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/04 12:55:48 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/10 15:24:39 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/next_bigger_number.h"
# include <criterion/criterion.h>

Test(the_multiply_function, should_pass_all_the_tests_provided) {
    printf("Sample Test Cases\n");
    cr_assert_eq(next_bigger_number(12), 21);
    cr_assert_eq(next_bigger_number(513), 531);
    cr_assert_eq(next_bigger_number(2017), 2071);
    cr_assert_eq(next_bigger_number(414), 441);
    cr_assert_eq(next_bigger_number(144), 414);
}
