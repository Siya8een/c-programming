// write a program to compare two string
#include <stdio.h>
int compare(char a[],char b[]);

int main(){
    char str1[20];
    char str2[20];
    printf("enter the value of 1st string: ");
    scanf("%s",str1);
    printf("enter the value of 2nd string: ");
    scanf("%s",str2);
    int value = compare(str1,str2);
    if (value==0){
        printf("strings are same");  
    }
    else{
        printf("strings are  not same");   
    }
    return 0;
}
int compare(char a[],char b[]){
    int i=0,k=0;
    while(a[i]!='\0'&& b[i]!='\0')
    {
        if (a[i]!=b[i])
        {
            k = 1;
            break;
        }
        i++;
    }
    if(k==0){
        return 0;
    }
    else{
        return 1;
    }


}
