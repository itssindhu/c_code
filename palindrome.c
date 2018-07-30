#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_SIZE 25
#define  TRUE 0
#define  FALSE 1
//#define  ERROR  -1
int do_palindrome_check(char *check_string)
{
	//printf("check_string:%s\n",check_string);
	int first_index=0;
	int count=0;
	int length=strlen(check_string);
	int last_index=length-1;
	//printf("index_len:%d\n",last_index);
	while(first_index<last_index)
	{
		if(check_string[first_index]==check_string[last_index])
		 {
			count++;
		 }
		   first_index++;
		   last_index--;
	}
      //printf("count:%d",count);
      //printf("last_index:%d\n",last_index);
    if(length%2==0)
    {
	   if(count==length/2)
	   {
		//printf("The given string is palindrome");
		return TRUE;
	   }
    }
    else
    {  
    	if (count==last_index)
        {
       	  //printf("The given string is  palindrome.");
        	return TRUE ;
        }
    }
   return FALSE;
}
int main()
{
	char *string;
	int return_value;
	string=malloc(MAX_SIZE * sizeof(char));
	printf("Enter the string:");
	scanf("%s",string);
	//function call
	do_palindrome_check(string);
    //return value of function
   return_value=do_palindrome_check(string);
    //display result
	if(return_value==0)
	{
		printf("The given string is palindrome.");
	}
     if(return_value==1)
	{
		printf("The given string is not palindrome.");
	}
	
	return 0;
}