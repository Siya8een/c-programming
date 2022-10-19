//printing a string
#include<stdio.h>
int printcharacter(char string[]);
int main(){
    char name[]="siya Rana";

     printcharacter(name);
    
    return 0;
}

int printcharacter(char string[]){
    
    for(int i=0;string[i]!='\0';i++){
        printf("%c",string[i]);
    }
    printf("\n");
    return 0;
}
