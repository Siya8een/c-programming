//printing table in an array
#include<stdio.h>
int main(){
    int n;
    
    printf("enter value of n");
    
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n;i++){
       // i=i*3;
      // int a=i*3;
      arr[i]=(i*2);
        printf("%d \n", arr[i]);
    }
    return 0;
}
