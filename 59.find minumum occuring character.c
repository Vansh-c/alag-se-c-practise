// to find first minimum occuring character . 
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void print_min_char(char *s);

int main()
{
  char s[] = "vvaannssh";
  print_min_char(s);

  return 0;
}

void print_min_char(char *s)
{
 
  int length = strlen(s);
  char unique[100];
  int counted = 0;
  int min_count;
  char min_char;
  

  for (int i = 0; i < length; i++)
  {
  
    bool already_counted = false;
    for (int j = 0; j < counted; j++)
      if (s[i] == unique[j])
        already_counted = true;
    
   
    if (already_counted) continue;
   
  
    int count = 0;
    for (int j = 0; j < length; j++)
      if (s[i] == s[j]) count++;
    
   
    unique[counted] = s[i];
    counted++;
    
    
    if (counted == 1)
    {
      min_count = count;
      min_char = s[i];
    }
    else if (count < min_count)
    {
      min_count = count;
      min_char = s[i];
    }
  }

 
  if (length > 0)
    printf("%c:%d\n", min_char, min_count);
  else 
    printf("error: string has 0 length\n");
}