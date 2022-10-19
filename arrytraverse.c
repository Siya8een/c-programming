//transverse array
//array

#include <stdio.h>
int main(){
    int n;
    int arr[n];
    printf("no. of element");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter values of array\n");
        scanf("%d",&arr[i]);
        
    }
    for (int i=0;i<n;i++){
         printf(" values of array %d", arr[i]);
   
    }
   
    return 0;
}

