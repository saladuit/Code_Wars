/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mr_asprintf.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:49:02 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:49:13 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

void *memcpy(void *dest, const void *src, size_t n);

//input string
//calculate size of the string
//allocate the size to result
//cpy content of format to result
//return result

// {i}
// {s}
// {{

// VA_ARGS
// NAME
//        stdarg, va_start, va_arg, va_end, va_copy - variable argument lists

// SYNOPSIS
//        #include <stdarg.h>

//        void va_start(va_list ap, last);
//        type va_arg(va_list ap, type);
//        void va_end(va_list ap);
//        void va_copy(va_list dest, va_list src);

// DESCRIPTION
//        A  function may be called with a varying number of arguments of varying
//        types.  The include file <stdarg.h> declares a type va_list and defines
//        three  macros for stepping through a list of arguments whose number and
//        types are not known to the called function.

//        The called function must declare an object of  type  va_list  which  is
//        used by the macros va_start(), va_arg(), and va_end().

//    va_start()
//        The  va_start() macro initializes ap for subsequent use by va_arg() and
//        va_end(), and must be called first.

//        The argument last is the name of the last argument before the  variable
//        argument list, that is, the last argument of which the calling function
//        knows the type.

//        Because the address of this argument may  be  used  in  the  va_start()
//        macro,  it should not be declared as a register variable, or as a func‐
//        tion or an array type.
// va_arg()
//        The va_arg() macro expands to an expression that has the type and value
//        of  the  next  argument in the call.  The argument ap is the va_list ap
//        initialized by va_start().  Each call to va_arg() modifies ap  so  that
//        the  next  call returns the next argument.  The argument type is a type
//        name specified so that the type of a pointer to an object that has  the
//        specified type can be obtained simply by adding a * to type.

//        The  first use of the va_arg() macro after that of the va_start() macro
//        returns the argument after last.   Successive  invocations  return  the
//        values of the remaining arguments.

//        If  there  is  no  next argument, or if type is not compatible with the
//        type of the actual next argument (as promoted according to the  default
//        argument promotions), random errors will occur.

//        If ap is passed to a function that uses va_arg(ap,type), then the value
//        of ap is undefined after the return of that function.

//    va_end()
//        Each invocation of va_start() must be matched by a corresponding  invo‐
//        cation of va_end() in the same function.  After the call va_end(ap) the
//        variable ap is undefined.  Multiple traversals of the list, each brack‐
//        eted  by va_start() and va_end() are possible.  va_end() may be a macro
//        or a function.
// EXAMPLE
//        The function foo takes a string of format characters and prints out the
//        argument associated with each format character based on the type.

//        #include <stdio.h>
//        #include <stdarg.h>

//        void
//        foo(char *fmt, ...)   /* '...' is C syntax for a variadic function */

//        {
//            va_list ap;
//            int d;
//            char c, *s;

//            va_start(ap, fmt);
//            while (*fmt)
//                switch (*fmt++) {
//                case 's':              /* string */
//                    s = va_arg(ap, char *);
//                    printf("string %s\n", s);
//                    break;
//                case 'd':              /* int */
//                    d = va_arg(ap, int);
//                    printf("int %d\n", d);
//                    break;
//                case 'c':              /* char */
//                    /* need a cast here since va_arg only
//                       takes fully promoted types */
//                    c = (char) va_arg(ap, int);
//                    printf("char %c\n", c);
//                    break;
//                }
//            va_end(ap);
//        }

//
//size will differ so we have to realloc some memory to suit our needs
//we need to figure out how to extract the data that is stored in additional arguments 
//and concatenate that to our result

//if nothing is specified we simply add the index to result
//if we encounter a '{' we check what the next character is
//if we encounter another '{' we add one '{' to the result
//if we enounter s or i call va arg to load the result into a matching data type buffer 
// so that we can load that into the result
// then skip past the last '}'
//continue until we reach the end of format string

// we want to look into function pointers
// maybe it is necessary to make some sort of struct to store our data more efficiently.

// lastly let's look at the genereal flow of our code
// NAME
//        ascii - ASCII character set encoded in octal, decimal, and hexadecimal

// DESCRIPTION
//        ASCII  is  the  American  Standard  Code for Information Interchange.  It is a 7-bit
//        code.  Many 8-bit codes (e.g., ISO 8859-1) contain ASCII as their lower  half.   The
//        international counterpart of ASCII is known as ISO 646-IRV.

//        The following table contains the 128 ASCII characters.

//        C program '\X' escapes are noted.

//        Oct   Dec   Hex   Char                        Oct   Dec   Hex   Char
//        ────────────────────────────────────────────────────────────────────────
//        000   0     00    NUL '\0' (null character)   100   64    40    @
//        001   1     01    SOH (start of heading)      101   65    41    A
//        002   2     02    STX (start of text)         102   66    42    B
//        003   3     03    ETX (end of text)           103   67    43    C
//        004   4     04    EOT (end of transmission)   104   68    44    D
//        005   5     05    ENQ (enquiry)               105   69    45    E
//        006   6     06    ACK (acknowledge)           106   70    46    F
//        007   7     07    BEL '\a' (bell)             107   71    47    G
//        010   8     08    BS  '\b' (backspace)        110   72    48    H
//        011   9     09    HT  '\t' (horizontal tab)   111   73    49    I
//        012   10    0A    LF  '\n' (new line)         112   74    4A    J
//        013   11    0B    VT  '\v' (vertical tab)     113   75    4B    K
//        014   12    0C    FF  '\f' (form feed)        114   76    4C    L
//        015   13    0D    CR  '\r' (carriage ret)     115   77    4D    M
//        016   14    0E    SO  (shift out)             116   78    4E    N
//        017   15    0F    SI  (shift in)              117   79    4F    O
//        020   16    10    DLE (data link escape)      120   80    50    P
//        021   17    11    DC1 (device control 1)      121   81    51    Q
//        022   18    12    DC2 (device control 2)      122   82    52    R
//        023   19    13    DC3 (device control 3)      123   83    53    S
//        024   20    14    DC4 (device control 4)      124   84    54    T
//        025   21    15    NAK (negative ack.)         125   85    55    U
//        026   22    16    SYN (synchronous idle)      126   86    56    V
//        027   23    17    ETB (end of trans. blk)     127   87    57    W
//        030   24    18    CAN (cancel)                130   88    58    X
//        031   25    19    EM  (end of medium)         131   89    59    Y
//        032   26    1A    SUB (substitute)            132   90    5A    Z
//        033   27    1B    ESC (escape)                133   91    5B    [
//        034   28    1C    FS  (file separator)        134   92    5C    \  '\\'
//        035   29    1D    GS  (group separator)       135   93    5D    ]
//        036   30    1E    RS  (record separator)      136   94    5E    ^
//        037   31    1F    US  (unit separator)        137   95    5F    _
//        040   32    20    SPACE                       140   96    60    `
//        041   33    21    !                           141   97    61    a
//        042   34    22    "                           142   98    62    b
//        043   35    23    #                           143   99    63    c
//        044   36    24    $                           144   100   64    d
//        045   37    25    %                           145   101   65    e
//        046   38    26    &                           146   102   66    f
//        047   39    27    '                           147   103   67    g
//        050   40    28    (                           150   104   68    h
//        051   41    29    )                           151   105   69    i
//        052   42    2A    *                           152   106   6A    j
//        053   43    2B    +                           153   107   6B    k
//        054   44    2C    ,                           154   108   6C    l
//        055   45    2D    -                           155   109   6D    m
//        056   46    2E    .                           156   110   6E    n

//        057   47    2F    /                           157   111   6F    o
//        060   48    30    0                           160   112   70    p
//        061   49    31    1                           161   113   71    q
//        062   50    32    2                           162   114   72    r
//        063   51    33    3                           163   115   73    s
//        064   52    34    4                           164   116   74    t
//        065   53    35    5                           165   117   75    u
//        066   54    36    6                           166   118   76    v
//        067   55    37    7                           167   119   77    w
//        070   56    38    8                           170   120   78    x
//        071   57    39    9                           171   121   79    y
//        072   58    3A    :                           172   122   7A    z
//        073   59    3B    ;                           173   123   7B    {
//        074   60    3C    <                           174   124   7C    |
//        075   61    3D    =                           175   125   7D    }
//        076   62    3E    >                           176   126   7E    ~
//        077   63    3F    ?                           177   127   7F    DEL

size_t  ft_strlen(const  char *str) {
  size_t size;
  
  size = 0;
  while (str[size])
    size++;
  return (size);
}

void  *ft_memcpy(void *dest, const void *src, size_t n) {
  unsigned char *d;
  unsigned const char *s;
  
  d = dest;
  s = src;
  while (n) {
    *d = *s;
    d++;
    s++;
    n--;
  }
  return (dest);
}

char  *cvrtstr(char *s1, char *s2) {
  size_t len_s1;
  size_t len_s2;
  char *dest;
  
  len_s1 = ft_strlen(s1);
  len_s2 = ft_strlen(s2);
  dest = calloc(len_s1 + len_s2 + 1, sizeof(char));
  ft_memcpy((void *)dest, s1, len_s1);
  ft_memcpy((void *)&dest[len_s1], s2, len_s2);
  return (dest);
}
size_t ft_numlen(int num) {
  size_t size;
  
  size = 0;
  while (num) {
    num /= 10;
    size++;
  }
  return (size);
}
char  *ft_itoa(int num, size_t size) {
  char *result;
  size_t i;
  
  i = 0;
  if (num == 0){
    result = calloc(2, sizeof(char));
    result[i] = '0';
    return (result);
  }
  if (num < 0) {
    result = calloc(size + 1, sizeof(char));
    result[i] = '-';
    i++;
    num *= -1;
  }
  else
    result = calloc(size + 1, sizeof(char));
  while (i < size) {
    result[size - 1] = num % 10 + 48;
    num /= 10;
    size--;
  } 
  return (result);
}

char  *cvrtint(char *s1, int num) {
  size_t len_s1;
  size_t len_num;
  char *dest;
  char *s2;
  
  len_s1 = ft_strlen(s1);
  len_num = ft_numlen(num);
  if (num == 0)
    len_num = 1;
  if (num < 0)
    len_num += 1;
  printf("\nlen num:%zu\n", len_num);
  dest = calloc(len_s1 + len_num + 1, sizeof(char));
  ft_memcpy((void *)dest, s1, len_s1);
  s2 = ft_itoa(num, len_num);
  puts(s2);
  ft_memcpy((void *)&dest[len_s1], s2, len_num);
  return (dest);
}

char  *cvrtchar(char *s1, const char *s2) {
  size_t len_s1;
  char *dest;
  
  len_s1 = ft_strlen(s1);
  dest = calloc(len_s1 + 2, sizeof(char));
  ft_memcpy((void *)dest, s1, len_s1);
  ft_memcpy((void *)&dest[len_s1], s2, 1);
  return (dest);
}

char *mr_asprintf(const char *format, ...)
{
  size_t i;
  size_t size;
  char *result;
  va_list ap;
  
  i = 0;
  result = NULL;
  va_start(ap, format);
  size = ft_strlen(format);
  result = calloc(size + 1, sizeof(char));
  printf("\n\n");
  puts(format);
  while (format[i]) {
    printf("\nformat[i] == %c", format[i]);
    if (format [i] == '{') {
      i++;
      if (format[i] == '{') {
        result = cvrtchar(result, &format[i]);
        i++;
      }
      if (format[i] == 's') {
        result = cvrtstr(result, va_arg(ap, char *));
        i += 2;
      }
      else if (format[i] == 'i') {
        result = cvrtint(result, va_arg(ap, int));
        i += 2;
      }
    }
    else {
      result = cvrtchar(result, &format[i]);
      i++;
    }
  }
  va_end(ap);
  return (result);
}
