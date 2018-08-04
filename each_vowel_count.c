#include<stdio.h>
#include<string.h>
//main function
int main() {
 char string[50];
 int vowel_a=0,vowel_e=0,vowel_i=0,vowel_o=0,vowel_u=0,index;

 printf("Enter the string:");
 scanf("%s",string);

// vowels finding from given input.
   for(index=0;string[index]!='\0';index++)
   {
     if(string[index]=='A'||string[index]=='a'){ vowel_a++; }
      else if(string[index]=='E'||string[index]=='e') { vowel_e++;}
       else if(string[index]=='I'||string[index]=='i') { vowel_i++;}
        else if(string[index]=='O'||string[index]=='o') { vowel_o++;}
         else if(string[index]=='U'||string[index]=='u')  { vowel_u++;}
   }
   printf("The number of a in the given input string is:%d\n",vowel_a);
   printf("The number of e in the given input string is:%d\n",vowel_e);
   printf("The number of i in the given input string is:%d\n",vowel_i);
   printf("The number of o in the given input string is:%d\n",vowel_o); 
   printf("The number of u in the given input string is:%d\n",vowel_u);
return 0;
}
