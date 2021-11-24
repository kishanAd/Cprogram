

#include <stdio.h>

int stringlen(char s[])
{
  int i;
  int len = 0;
  for (i = 0; s[i] != '\0'; i++)
  {
    len++;
  }

  return len;
}
int main()
{

  char word[120];
  int i, end, middle;
  printf("Enter a word:\n");

  scanf("%s", word);
  int size = stringlen(word);
  end = size - 1;
  middle = end / 2;
  
  for (i = 0; i < middle; i++)
  {
    if (word[i] != word[end])
    {
      printf("The word %s is not palindrome.\n", word);
      break;
    }
    end--;
  }

  if (i == middle)
  {
    printf("The word %s is palindrome.\n", word);
  }

  return 0;
}