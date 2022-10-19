#include <stdio.h>
void main()

{
    
    int i;
    int *ptr;
     ptr=&i;
     *ptr=0;
     printf("enter any number to the value of i ");
     scanf("%d",&i);
       printf(" value of i %d",i);
     
     *ptr=*ptr+5;
     printf("value of the pointer %d",*ptr);
     (*ptr)++;
     printf("value after increment %d",*ptr);
     
     return;
     
    
}
