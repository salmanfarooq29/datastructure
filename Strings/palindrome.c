#include <stdio.h>
#include <string.h>
int main()
{
   char str[], i=0;
   int str_len;
 
   printf("Enter a word to check for Palindrome : ");
   scanf("%s",str);
   printf("\nEntered word is : %s", str);
 
   while(1)
   {
      str_len = strlen(str) - (i+1);
 
      if (str[i] == str[str_len])
      {
         if (i == str_len || i+1 == str_len)
         {
            printf("\nThe entered word \"%s\" is a palindrome", str);
            break;
         }
         i = i+1;
      }
      else
      {
         printf("\nThe entered word \"%s\" is not a palindrome", str);
         break;
      }
   }
   return 0;
}
