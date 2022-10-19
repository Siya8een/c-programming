#include <stdio.h>
int main(){
    int n1=0, n2=1;
    int n3=n1+n2;
    int n;
   
    printf("enter number of terms");
    scanf("%d",&n);
     printf("%d \n%d \n",n1,n2);
    for(int i=3 ;i<=n ;i++){
        printf("%d\n", n3);
        n1=n2;
        n2=n3;
        n3=n1+n2;
    }
    return 0;
}
