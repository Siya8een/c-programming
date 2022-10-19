//square of the number given by the user

#include<stdio.h>
#include<math.h>


int sqnumber(int a);

int main()

{
    int a;
    printf("enter a number");
    scanf("%d", &a);
    printf("square of number %d", sqnumber(a));
    return 0;
}
int sqnumber(int a){
    return a*a;
    
}

