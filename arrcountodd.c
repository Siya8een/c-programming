#include<stdio.h>
void countarr(int arr[],int n);
int main()
{
    int n;
    printf("enter value of n");
    scanf("%d",&n);
     printf("count is %d",countarr( arr[], n) );
     return 0;
}

void countarr(int arr[],int n)
{
	int count=0;
    for(int i=0;i<=n;i++){
        
            if(arr[i] % 2 !=0){
            count++;
        }
        return;
    }
    
    
}
