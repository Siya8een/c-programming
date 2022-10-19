// write a array code to enter price


#include<stdio.h>
int main(){
    int i;
    int arr[3];
    for(i=0;i<3;i++){
        //printf("enter a number\n");
        scanf("%d",&arr[i]);
       // printf("%d \n",arr[i]);
    }
    for(int i=0;i<3;i++){
        printf("required values are");
        printf("%d \n", (arr[i]+(arr[i]*18/100)));
    }
    return (arr[i]+(arr[i]*18/100));
}
