/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   criterion.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 11:25:29 by safoh         #+#    #+#                 */
/*   Updated: 2021/10/06 11:26:22 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>

char *mr_asprintf(const char *format, ...);
void _test_mr_asprintf(char *actual, const char *expected, const char *format, ...);

#define test_mr_asprintf(expected, format, ...) \
    do { \
        char *actual = mr_asprintf(format, ##__VA_ARGS__); \
        _test_mr_asprintf(actual, expected, format, ##__VA_ARGS__); \
        free(actual); \
    } while (0)

Test(mr_sprintf, some_basic_tests)
{
    test_mr_asprintf("Gaius Julius Caesar Augustus Germanicus", "Gaius Julius Caesar Augustus Germanicus");
    test_mr_asprintf("Nickname: Caligula", "Nickname: {s}", "Caligula");
    test_mr_asprintf("Reign: 37 AD - 41 AD", "Reign: {i} AD - {i} AD", 37, 41);
    test_mr_asprintf("born: August 31, 12 in Antium", "born: {s} {i}, {i} in {s}", "August", 31, 12, "Antium");
    test_mr_asprintf("Roman emperor #3", "Roman emperor #{i}", 3);
}
