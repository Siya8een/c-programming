#include <stdio.h>
int main(){
    char a;
    int n1,n2;
    printf("enter two numbers");
    
    scanf("%d %d", &n1, &n2);
    printf("enter operation to be performed");
    scanf("%c",&a);
    switch(a)
    {
        case '+':
            printf("%d", n1+n2);
            break;

        case '-':
            printf("%d", n1-n2);
            break;

        case '*':
            printf("%d", n1*n2);
            break;

        case '/':
            printf("%d", n1/n2);
            break;
        default:    
            printf("Error! operator is not correct");
    }
    return 0;
}
