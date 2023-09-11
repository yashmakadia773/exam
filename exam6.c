#include<stdio.h>
main()
{
   char s[100];
   int i,n,c=0;

   printf("Enter the string:");
   gets(s);
   n=strlen(s);

   for(i=0;i<1;i++)
   {
    if (s[i]==s[n-i-1])
    c++;

   }
   if(c==i)
        printf("string is palindrome");
   else
        printf("stringshtring is not palindromer");



}
