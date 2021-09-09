/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*   Pulled from CodeWars.com                          +:+                    */
/*   Edidted By: safoh <safoh@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/04 12:55:48 by safoh         #+#    #+#                 */
/*   Updated: 2021/09/03 11:48:35 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/longest.h"

void dotest(char* s1, char* s2, char *expr)
{
    char *act = longest(s1, s2);
    if(strcmp(act, expr) != 0)
        printf("Error. Expected %s but got %s\n", expr, act);
    cr_assert_str_eq(act, expr, "");
}
Test(longest, ShouldPassAllTheTestsProvided)
{ 
    dotest("aretheyhere", "yestheyarehere", "aehrsty");
    dotest("loopingisfunbutdangerous", "lessdangerousthancoding", "abcdefghilnoprstu");
    dotest("inmanylanguages", "theresapairoffunctions", "acefghilmnoprstuy");
    dotest("lordsofthefallen", "gamekult", "adefghklmnorstu");
    dotest("codewars", "codewars", "acdeorsw");
}
