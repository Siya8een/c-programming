#include<stdio.h>

void hlw(int count);

 int main()
{
    int count;
    printf("enter count");
    scanf("%d ",&count);
    hlw(count);
   
}
void hlw(int count)
{
    if (count==0){
        return;
    }
    printf ("hellow ");
    hlw(count-1);
}
