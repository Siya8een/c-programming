#include<stdio.h>
#include<math.h>
int main()
{
	int n, a;
	printf("enter any number");
	scanf("%d",&n);
	for(int i=1;i<=10;i++){
		a=n*i;
		printf("%d*%d=%d \n", n,i,a);
	}
	return 0;
}
