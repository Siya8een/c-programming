//enter user name and enter its length

#include <stdio.h>
int main(){
	char name[100];
	gets(name);
	int count=0;
	for(int i=0; name[i]!='\0';i++){
		count=count+1;
	}
	printf("count %d", count);
	return 0;
}
