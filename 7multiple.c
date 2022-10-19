// enter numbers multiple of 7 only

#include<stdio.h>
#include<math.h>
int main()

{
	int a;
	scanf("%d",&a);
	printf("the number %d", a);
	
	if(a%7 != 0)
	{
		break;
	}
	return 0;
}
