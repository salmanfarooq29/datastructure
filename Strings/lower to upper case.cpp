

#include <stdio.h>
 
void upper_string(char []);
 
int main()
{
   char string[100];
 
   printf("Enter a string to convert it into upper case\n");
   gets(string);
 
   upper_string(string);
 
   printf("\nThe string in upper case: %s\n", string);
 
   return 0;
}
 
void upper_string(char s[]) 
{
   int i = 0;
 
   while (s[i] != '\0') {
      if (s[i] >= 'a' && s[i] <= 'z') {
         s[i] = s[i] - 32;
      }
      i++;
   }
}
