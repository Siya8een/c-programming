#include <stdio.h>

//int multipleo()


int dowork(int a, int b, int*sum, int*prod, int*avg);
int main(){
	
	int a=3, b=4, sum, prod, avg;
    dowork(a, b, &sum, &prod, &avg);
    
    printf("sum=%d, prod= %d, avg= %d\n", sum, prod, avg);
	
  return 0;
	
	
	
	
}
int dowork(int a, int b, int*sum, int*prod, int*avg){
	
	*sum=a+b;
	*prod=a* b;
	*avg=(a+b)/2;
	 return 0;
	
	
}
