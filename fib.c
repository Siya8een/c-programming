// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num,t1,t2;
    printf("enetr the number");
    scanf("%d",&num);
    t1=0;
    t2=1;
    if(num==1){
        printf("%d",t1);
        
    }
    if(num>1){
        printf("%d \n%d",t1,t2);
        
    }
    for (int i =3;i<=num;i++){
       int n=t1+t2;
        printf("\n%d",n);
        t1=t2;
        t2=n;
    }
    
    return 0;
}
