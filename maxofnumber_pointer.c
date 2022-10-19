//max number using pointer
#include <stdio.h>
int maxnumb(int a, int b);

int main(){
	int a, b;
	printf("enter first numbers");
	scanf("%d", &a);
		printf("enter second numbers");
	scanf("%d", &b);
	printf("max of two number %d", maxnumber(a, b));
	return 0;
	
	
	
}

int maxnumber(int a, int b){
	if (a>b){
	return a;
	}
	else{
		return b;
	}
	return 0;
}
