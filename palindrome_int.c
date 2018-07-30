#include<stdio.h>
int main()
{
 int temp,remainder;
 int number;
 int reverse=0;
 printf("Enter the number:");
 scanf("%d",&number);
 temp=number;
 while(temp!=0)
 {
  remainder=temp%10;
  reverse=reverse*10+remainder;
  temp=temp/10;
 }
 printf("Reverse Number:%d\n",reverse);
  if(number==reverse){printf("The %d is palindrome",number); }
    else{printf("The %d is not palindrome",number);}
return 0;
}
