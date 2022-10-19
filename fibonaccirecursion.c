#include <stdio.h>
int fib(int n);
int main()
{
	int n;
	printf("number");
	scanf("%d",&n);
	printf("fibonacci value %d", fib(n));
	return 0;
}
int fib(int n){
	
	if(n==0||n==1){
		if(n==0){
			return 0;
		}
			if(n==1){
			return 1;
	}
	}
	
	int fibNm1= fib(n-1);
	int fib= fibNm1 + n;
	return fib;
}
