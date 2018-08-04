#include <stdio.h>
 void main() {
  int i_index, j_index, temp_var, no_of_input, input[30];
    printf("Enter the number of input \n");
    scanf("%d", &no_of_input);
 
     printf("Enter the input number \n");
      for (i_index = 0; i_index < no_of_input; ++i_index) { scanf("%d", &input[i_index]); }
         
       for (i_index = 0; i_index < no_of_input; ++i_index) {
          for (j_index = i_index + 1; j_index < no_of_input; ++j_index){
              if (input[i_index] > input[j_index])  {
                    temp_var=input[i_index];
                    input[i_index] = input[j_index];
                    input[j_index] = temp_var;
                        }
                    }
                }
     printf("After sorting the values are: \n");
        for (i_index = 0; i_index < no_of_input; ++i_index) { printf("%d\n",input[i_index]); }
   }
