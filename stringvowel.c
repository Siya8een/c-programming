//write a function to count the occurence of vowels in a string

#include <stdio.h>
int main(){
    char name[100];
    gets(name);
    puts(name);
    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
        {
            count=count+1;
        }
    }
    printf("%d", count);
    return count;
}
