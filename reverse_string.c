#include<stdio.h>
int main()
{
   char string[1000], reverse_string[1000];
   int start, end, count = 0;
 
   printf("Input a string\n");
   scanf("%s",string);
  while (string[count] != '\0'){     
     count++;
     end = count - 1;
   }

  for (start = 0; start < count; start++) {
      reverse_string[start] = string[end];
      end--;
   }
 
    reverse_string[start] = '\0';
   printf("%s\n", reverse_string);
   return 0;
}
 
