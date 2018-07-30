#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#define MAX_LEN 50
typedef struct
 {
  char input[10];
  char *result;
 } String_struct;

int display( String_struct *value)
{
 int Index=0;
 int String_len;
 
  String_len=strlen(value->input);
  value->result = malloc( String_len+1 * sizeof(char) );

  for(Index=0;Index<=String_len;Index++)
   {
    value->result[Index] = value->input[Index];
   }
  value->result[Index]= '\0';
 return 0;
}

int main()
{  
   String_struct *value; 
   value=malloc(sizeof(String_struct));
   scanf("%s",value->input);
   display(value);
   printf("Result:%s\n",value->result);
   free(value);
return 0;
}


