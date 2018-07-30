#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct  {
 int Stu_Id;
 char Name[20];
 float Percentage;
} Student;
int main()
{
   Student *value; 
   value=malloc(sizeof( Student)*2);

   for(int index=0;index<2;index++)
    {
        //printf("Stu_Id:%d\n",index);
        scanf("%s",&(value+index)->Name);
        scanf("%f",&(value+index)->Percentage);
     }
   for(int index=0;index<2;index++)
   {
    printf("Stu_Id:%d\n",index);
    printf("Name:%s\nPercentage:%f\n",(value+index)->Name,(value+index)->Percentage);
   }
return 0;
}
