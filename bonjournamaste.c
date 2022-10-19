#include<stdio.h>

 void printnamaste();
 void printbonjour();
 
 int main(){
 	char c;
 	printf("enter character");
 	scanf("%c", &c);
	 if(c='b') 	{
	 		printnamaste();
	 }
 	
 	 else 	{
	 	  printbonjour();
	 }
 
 	return 0;
 }
 
 void printnamaste(){
 printf("namaste INDIA");
 }
  
 void printbonjour(){
 printf("bonjour FRANCE");
 }
