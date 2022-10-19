// function to reverse an arrsy
#include <stdio.h>
int main(){
   
    int arr[4];
    printf("enter elements of the array");
    for(int i=0;i<=4;i++){
        
        scanf("%d",&arr[i]);
        
        
    }
    for(int i=4;i>=0;i--){
       // printf("enter elements of the array");
        printf("%d",arr[i]);
        
        
    }
    return 0;
}
