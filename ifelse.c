#include <stdio.h>
int main(){
	//largest of three numbers
	
	int a,b, c;
	printf("enter three numbers");
	scanf("%d %d %d", &a, &b, &c);
	printf("%d %d %d", a ,b ,c);
	
	if(a>b){
		return a;
	}
	if(c>b){
		return c;
	}
	
	else{
		return b;
	}
	
	return 0;
}
