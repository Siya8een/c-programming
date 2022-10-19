//create a powerfunction
#include <stdio.h>
 int power(int x, int y);
 int main(){
 	int x,y;
 	printf("enter x and y");
 	scanf("%d %d", &x , &y);
 	
 	printf("answer %d", power(x, y));
 	
 	return 0;
 }
 
 power(int x,int y){
     if (y==0){
         return 1;
     }
	 else{
	 	for(int i=1;i<=y;i++){
	 		return x*x;
	 	    
	 	}
	 	} 
	 }
 
 
