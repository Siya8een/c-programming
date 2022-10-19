//adding salt to password
#include <stdio.h>
#include <string.h>
int salting(char password[]);
int main(){
	char password[100];
	
	fgets(password, 100, stdin);
	salting(password);
}
int salting(char pass[]){
	char newpassword[200];
	strcpy(newpassword,pass);
char salt[]="123";
strcat(newpassword,salt);
for(int i=0;newpassword[i]!='\0';i++){
    printf("%c", newpassword[i]);
}
//printf("%s",newpassword);
return 0;

}
