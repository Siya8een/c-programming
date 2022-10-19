//array having fibonacci values

#include<stdio.h>

int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    int arr[n];
    
     arr[0]=0;
     arr[1]=1;
     printf("%d %d",arr[0],arr[1]);
      //arr[n]=arr[n-1]+arr[n-2]
     
     for(int i=2;i<=n;i++){
         arr[i]=arr[i-1]+arr[i-2];
          printf("%d \t",arr[i]);
     }
     printf("/n");
     
     return 0;
     
}
