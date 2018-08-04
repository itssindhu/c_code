#include<stdio.h>
#include<string.h>
//main function
int main() {
 char string[50];
 int vowel=0,index;

 printf("Enter the string:");
 scanf("%s",string);

// vowels finding from given input.
for(index=0;string[index]!='\0';index++)
 {
  if(string[index]=='A'||string[index]=='a'||string[index]=='E'||string[index]=='e'||string[index]=='I' \
       ||string[index]=='i'||string[index]=='O'||string[index]=='o'||string[index]=='U'||string[index]=='u')
   {
     vowel++;
   }
   else
 }
 printf("The number of vowel in the given input string is:%d\n",vowel);
return 0;
}

