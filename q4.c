#include <stdio.h>
#include <string.h>
int main(){ //saves input string in variable

   char s[20];
   printf("Enter a string:");
   scanf("%s",&s); //counts the number of vowels by checking each letter
   
   int i=0;
   int c=0;
   int n=strlen(s);
   printf("%d\n",n);
   while (i<n)
   {
       if (s[i]=='a'|| s[i]=='e'|| s[i]=='o'||s[i]=='u'||s[i]=='i')
       c++;
    i++;
   }
   printf("Number of vowels are %d",c);
   return 0;
}