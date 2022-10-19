#include <stdio.h>
int main(){
	//comparing subtracting array pointer
	
int age=20;
int age1=29;
int age2=30;
int *ptr=age;
int *ptr1=age1;
int *ptr2=age;

printf("%u\n %d \n%d \n%d \n",ptr-ptr1,ptr,ptr1, ptr2);
printf("%u \n",ptr==ptr2);
printf("%u \n",ptr==ptr1);






		
	}
	

