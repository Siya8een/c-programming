#include <stdio.h>
#include <math.h>
int main()
{
	int number;
	printf("enter any number");
	scanf("%d", &number);
	
	printf("%d", number%2==0);
	return 0;
	
}
