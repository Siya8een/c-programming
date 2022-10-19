//string comparison

#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    char surname[100];
  
    gets(name);
    gets(surname);
    
    printf("%d comparing",strcmp( name,surname));
    
}
