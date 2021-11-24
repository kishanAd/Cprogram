/*  
    @Author: Kishan Adhikari
    @Created Date: 2078/05/04
    @filename: count.c
    @Description:Program to read a sentence and count the number of characters 
    and words in that sentence.
  */

#include <stdio.h>
#include <string.h>
int main()
{
  char sentences[1024];
  printf("Enter a sentences:\n");
  fgets(sentences, 1024, stdin);
  int word = 0, character = 0, i;
  for (i = 0; i < strlen(sentences); i++)
  {
    if (sentences[i] != ' ')
    {
      character++;
    }
  }
  for (i = 0; i < strlen(sentences); i++)
  {
    if (sentences[i] == 32)
    {
      word++;
    }
  }
  word += 1; //last word doesn't hit space after it .To count last word.
  printf("Total character in a string is %d\n", character - 1);
  printf("Total word in a string is %d\n", word);
}