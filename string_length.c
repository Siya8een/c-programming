#include <stdio.h>
int main(){
	char name[100];
	fgets(name, 100, stdin);
	puts(name);
	int count;
	for(int i=0; name[i]!='\0';i++){
	 
		count ++;
	}
	printf(" %d \n", count-1 );
	return count-1;
}

