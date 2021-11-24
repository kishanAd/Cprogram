/*  @Author: Kishan Adhikari
    @Created Date: 2078/05/05
    @filename: replace.c
    @Description: program to read a sentence and delete all the white spaces.
     Replace all “.” by “:”.

  */
#include <stdio.h>
#include <string.h>
int main()
{
  int i, j = 0;
  char sentences[1000];
  printf("Enter a sentences:\n");
  fgets(sentences, 1000, stdin);
  for (i = 0; i < strlen(sentences); i++)
  {
    sentences[i] = sentences[i + j];
    if (sentences[i] == 32)
    {
      j++;
      i--;
    }
    if (sentences[i] == '.')
    {
      sentences[i] = ':';
    }
  }
  printf("string after removing white spaces and replacing . by :  is\n%s", sentences);
  return 0;
}