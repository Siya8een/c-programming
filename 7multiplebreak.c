#include <stdio.h>
#include <math.h>
int main()
{
    //agr n=7 multiple enter kre user to break ho
	int a,n;
	printf("enter number");
	scanf("%d",&n);

	for(a=8;a<=n;a++){
	    
	    if(n%7==0){
		break;
	}
		printf("%d", a);
	}
	
	return 0;
	
}

