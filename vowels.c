#include<stdio.h>
#include<string.h>
//main function
int main() {
 char character;
 printf("Enter the character:");
 scanf("%s",&character);

// vowels finding from given input.
  if(character=='A'||character=='a'||character=='E'||character=='e'||character=='I' \
       ||character=='i'||character=='O'||character=='o'||character=='U'||character=='u')
 {
   printf("The character %c is vowel.",character);
 }
 else { printf("the chracter %c is not vowel.",character); }
return 0;
}
