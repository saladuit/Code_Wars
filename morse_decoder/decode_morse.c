#include <stdlib.h>
#include <string.h>
#include <stdio.h>

const char *morse[55] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", "...-..-", ".--.-.", "...---..."};  
const char *ascii[55] = {"A",  "B",    "C",    "D",   "E", "F",    "G",   "H",    "I",  "J",    "K",   "L",    "M",  "N",  "O",   "P",    "Q",    "R",   "S",   "T", "U",   "V",    "W",   "X",    "Y",    "Z",    "0",     "1",     "2",     "3",     "4",     "5",     "6",     "7",     "8",     "9",     ".",      ",",      "?",      "'",      "!",      "/",     "(",     ")",      "&",     ":",      ";",      "=",     "+",     "-",      "_",      "\"",     "$",       "@",      "SOS"};

//INPUT morse_code[i]
//initialize i, y, to 0;
//WHILE morse_code[i] do i++ until '\0'
//  IF morse_code[i] == ' '
 //   DO i++
//  IF morse_code[i ] && morse_code[i + 1] == ' '
//    append ' ' to decoded
//  initialize j & x to 0
//  WHILE morse_code[i + j] != ' ' || '\0' do j++
//      IF !strcmp(morse[y], morse_code[i + j]
//         append ascii[y] to decoded
//      IF strcmp(morse[y], morse_code[i + j]
//          y++
//      WHILE morse_code[i + j] != ' ' do j++;
//        break;
// RETURN decoded

char *decode_morse(const char* morse_code) {
  size_t x;
  size_t y;
  size_t i;
  size_t j;
  size_t space;
  char *decoded;
  char * buf;
  
  i = 0;
  y = 0;
  decoded = NULL;
  buf = NULL;
  while (morse_code[i] != '\0') {
    space = 0;
    while (morse_code[i] == ' ') {    
      i++;
      space++;
    if (space % 3 == 0) {
      if (!decoded)
        decoded = calloc(1, 1);
      decoded = realloc(decoded, (strlen(decoded) + 1) *  sizeof(char));
      decoded = strcat(decoded, " ");
      } 
    }
    x = 0;
    while (morse_code[i + j] != ' ' && morse_code[i + j] != '\0') {
      j = 0;
      while (morse_code[i + j] != ' ')
        j++;
      buf = calloc(j + 1, sizeof(char));
      buf = memcpy(buf, &morse_code[i], j - 1);
      printf("\nbuf:\t%s\nmorse:\t%s\n", buf, morse[y]);
      if (!strcmp(morse[y], buf)) {
        decoded = strcat(decoded, ascii[y]);
        y = 0;
        i += j;
        free(buf);
        buf = NULL;
        break ;
      }
      if (strcmp(morse[y], buf))
      {
        i += j;
        y++;
      }
    }
    i++;
  }
  return (decoded);
}
