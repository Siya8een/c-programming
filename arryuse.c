
#include <stdio.h>
int main(){
    
    float arr[3] ;
    for( int i=0;i<3;i++){
        scanf("%f", &arr[i]);
        printf("rate %f", arr[i]);
        
        float a=( arr[i]+((0.18)*arr[i]) );
        
        printf("value %f",a);
    }
    
    return 0;
}
