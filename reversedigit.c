#include <stdio.h>
int main(){

int n, r;
scanf("%d", &n);

while(n!=0){
	r=n%10;
	printf("%d",r);
	n=n/10;
}
if(n==0){
    return 0;
}
printf("%d",n);
return 0;
}

