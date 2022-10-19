#include <stdio.h>
int main(){
    int num;
    int *ptr;
    ptr=&num;
    printf("wanna know ptr syntax a bit\n");
    scanf("%d", ptr);
   printf("the ptr value %d", *ptr);
    return 0;
}
