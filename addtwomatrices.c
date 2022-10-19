#include <stdio.h>
//add two matrices

int addmatrices(	int matric1[x][a], int matric2[y][b]);

int main(){
	int x=0;
	int y=0;
	
	int matric1[x][a];
	int matric2[y][b];
	int matrixadd[100][100];
	printf("enter value of ,x,a,y,b");
	scanf("%d",&x,&a,&y,&b);
	
	
	printf("enter matric1 elements");
	for(int i=0;matric1[i]<=x;i++){

		for(int j=0;matric1[j]<=a;j++){
	     printf("matric1:");
		scanf("%d", &matric1[i][j]);
			printf("matric2:");
			scanf("%d", &matric2[i][j]);
		}
	}
		for(int i=0;matric1[i]<=x;i++){

		for(int j=0;matric1[j]<=a;j++){
			printf("syn %d=%d+%d",addmatrices [i][j]= matric1[i][j]+ matric2[i][j] )
	
}
}
	//printf("enter matric2 elements");
	//for(int i=0;matric2[i]<=x;i++){

	//	for(int j=0;matric2[j]<=a;j++){
	
	//	scanf("%d", &matric2[i][j]);
	//	}
	//}
	
	return 0;
	//addmatrices(matric1[x][a],matric2[y][b]);
}

int addmatrices (int matric1[x][a], int matric2[y][b]){
	int matrixadd[100][100];
	printf("%d=%d+%d", addmatrices [][]= matric1[x][a]+ matric2[y][b]);
	
}
