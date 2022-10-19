#include <stdio.h>
//comparing two strings
int compare(char str1[],char str2[]);
int main(){
	char str1[100];
	fgets(str1, 100, stdin);
	char str2[100];
	fgets(str2, 100, stdin);
	
	compare(str1, str2);
	
}

int compare(char str1[],char str2[]){
	
	int i=0;
    int cmp=0;
	
	
while(str1[i]!='\0'&&str2[i]!='\0'){
	if(str1[i]!=str2[i]){
		printf("string is not equal");
		
	cmp==1;
	}
	if(cmp==0&&str1[i]=='\0'&&str2[i]=='\0'){
		printf("string is equal   ");
	}
	else{
	    return 0;
	}
}
return 0;
}
