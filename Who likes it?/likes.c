/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   likes.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:54:52 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:54:55 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

// return must be an allocated string to be freed by the tester
static  int   ft_itoa_strlen(int n)
{
  int           len;

  len = (n <= 0) ? 1 : 0;
  while (n)
  {
    ++len;
    n /= 10;
  }
  return (len);
}

char      *ft_itoa(int n)
{
  long  long  int   buffer;
  size_t          len;
  char          *alnum;

  buffer = n;
  len = ft_itoa_strlen(n);
  alnum = malloc(len + 1);
  if (!alnum)
    return (0);
  alnum[len - 1] = '\0';
  if (n == 0)
    *alnum = '0';
  if (n < 0)
  {
    *alnum = '-';
    buffer *= -1;
  }
  alnum[len] = '\0';
  while (buffer)
  {
    len--;
    alnum[len] = (buffer % 10) + '0';
    buffer /= 10;
  }
  return (alnum);
}

void  ft_bzero(void *s, size_t n)
{
  memset(s, 0, n);
}

static  void  *ft_memalloc(size_t size)
{
  void  *ptr;

  ptr = malloc(size);
  if (!ptr)
    return (NULL);
  ft_bzero(ptr, size);
  return (ptr);
}

static  char  *ft_strnew(size_t size)
{
  char  *str;

  if (size == __SIZE_MAX__)
    return (NULL);
  str = (char *)ft_memalloc(size + 1);
  return (str);
}

char      *ft_strjoin(char const *s1, char const *s2)
{
  size_t  len1;
  size_t  len2;
  char  *dest;

  if (!s1 || !s2)
    return (NULL);
  len1 = strlen(s1);
  len2 = strlen(s2);
  if (len1 + len2 > __SIZE_MAX__ - 1)
    return (NULL);
  dest = ft_strnew(len1 + len2);
  if (!dest)
    return (NULL);
  memcpy((void *)dest, s1, strlen(s1));
  memcpy((void *)&(dest[strlen(s1)]), s2, strlen(s2));
  return (dest);
}
static char *ft_strdup(const char *s)
{
  char *p;

  p = (char *)malloc(strlen(s) + 1);
  if (!p)
    return (NULL);
  memcpy(p, s, strlen((char *)s) + 1);
  return (p);
}

char *likes(size_t n, const char *const names[n]) {
  char *string;
  char *tmp;
  char *tmp2;

  string = NULL;
  tmp = NULL;
  tmp2 = NULL;
  if (!*names || n == 0)
    return (string = ft_strdup("no one likes this"));
  if (n == 1)
    return (string = ft_strjoin(names[0], " likes this"));
  if (n == 2) {
    tmp = ft_strjoin(names[0], " and ");
    tmp = ft_strjoin(tmp, names[1]);
    return (string = ft_strjoin(tmp, " like this"));
  }
  if (n == 3) {
    tmp = ft_strjoin(names[0], ", ");
    tmp = ft_strjoin(tmp, names[1]);
    tmp = ft_strjoin(tmp, " and ");
    tmp = ft_strjoin(tmp, names[2]);
    return (string = ft_strjoin(tmp, " like this"));
  }
  if (n >= 4) {
    tmp = ft_strjoin(names[0], ", ");
    tmp = ft_strjoin(tmp, names[1]);
    tmp = ft_strjoin(tmp, " and ");
    tmp2 = ft_itoa(n - 2);
    tmp = ft_strjoin(tmp, tmp2);
    return (string = ft_strjoin(tmp, " others like this"));
  }
  return (string);
}
