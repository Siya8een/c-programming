#include <stdio.h>
int factorial(int n);
int main(){
	int n;
	printf("enter factorial number");
	scanf("%d",&n);
	printf("factorial value %d", factorial(n) );
	return 0;
}

int factorial(int n){
	if(n==0){
		return 1;
	}
	
	int factNmOne =fact(n-1);
	int factN=fact(n-1)*n;
	return factN;
	

}
