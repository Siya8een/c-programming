#include <stdio.h>
#include <string.h>
int main(){
    char name[100];
    char value[100];
    gets(name);
    gets(value);
    printf("%d compare", strcmp(name,value));
    return 0;
}
