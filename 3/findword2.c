#include<stdio.h>

int main() {
   char str[1000], ch[1000];
   int count = 0, i;

   printf("\nEnter a string : ");
   scanf("%s",str);

   printf("\nEnter the character to be searched : ");
   scanf("%s",ch);

   for (i = 0; str[i] != '\0'; i++) {
      if (str[i] == ch)
         count++;
   }

   if (count == 0)
      printf("\nCharacter '%s'is not present", ch);
   else
      printf("\nOccurence of character '%s' : %d", ch, count);

   return (0);
}
