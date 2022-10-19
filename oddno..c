#include<stdio.h>
#include<math.h>
int main()
{//odd number netween 5 and 50
    int a;
    for(a=5;a<=50;a++){
        if ( a%2==0)
        {
            continue;
            
        }
        printf("%d \n", a);
}
return 0;
}
