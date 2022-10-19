#include <stdio.h>
#include <stdlib.h>
//  creating abstract data type using structures (array)
struct array{
    int total_size;
    int used_size;
    int *ptr;
        
};
void createarray(struct array *a,int tsize,int usize){
    a->total_size=tsize;
    a->used_size=usize;
    a-> ptr=(int*)malloc(tsize*(sizeof(int)));
    
    
}
int setvalue(struct array *a){
    int n;
    printf("array elements");
    for(int i=0; i<(*a).used_size;i++){
        scanf("%d", &n);
        (a->ptr)[i]=n;
    }
}
int printvalue(struct array *a){
   
    
    for(int i=0; i<(*a).used_size;i++){
        printf("%d\t",(a->ptr[i]));
        //scanf("%d",&n);
       
    }
    
}
int main(){
    struct array marks;
    int n,m;
    printf("enter total size");
    scanf("%d",&n);
    printf("enter used size");
    scanf("%d",&m);
    createarray(&marks, n, m);
    setvalue(&marks);
    printvalue(&marks);
    
    return 0;
}

