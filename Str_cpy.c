#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#define MAX_LEN 50
void main()
{
char *String = "PROGRAM";
char *Str;
int Index;
int String_len;
 String_len=strlen(String);
  Str = malloc( String_len+1 * sizeof(char) );
  for(Index=0;Index<=String_len;Index++)
   {
    Str[Index]= String[Index];
   }
 Str[Index]= '\0';
  printf("%s\n",Str);
}


