/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   snail.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/04 14:44:57 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/04 16:32:24 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SNAIL_H
# define SNAIL_H
# include <criterion/criterion.h>
# include <criterion/new/assert.h>
# include <stddef.h>
# include <limits.h>
# include <stdio.h>

typedef enum {
	ASSERT_PASS,
	ASSERT_FAIL
} assertop;
extern int *snail(size_t *outsz, const int **mx, size_t m, size_t n);
int **ia_to_imx(int **mx, const int *a, size_t rows, size_t cols);
char *ia_to_s(char *s, const int *a, size_t n, const char *sep);
char *imx_to_s(char *s, const int **mx, size_t nrows, size_t ncols);
assertop assert_mem_eq(const void *actual, const void *expected, size_t n, size_t size);
void assert_data(const int *mx, size_t m, size_t n, const int *expected_snail, size_t expected_outsz);

#endif
