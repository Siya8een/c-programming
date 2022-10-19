//factorial of number n
#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        a=a*i;
     printf("%d", a);
    }
return 0;
    
}
