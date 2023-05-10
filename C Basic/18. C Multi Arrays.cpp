#include<stdio.h>
int main(){
	int matrix[2][3]={{1, 4, 2}, {3, 6, 8}};
	
	printf("%d\n", matrix[0][0]);//1
	printf("%d\n", matrix[0][1]);//4
	printf("%d\n", matrix[0][2]);//2
	printf("%d\n", matrix[1][0]);//3
	printf("%d\n", matrix[1][1]);//6
	printf("%d\n", matrix[1][2]);//8
	
	printf("\nPrinting Multi array using for loop\n");
	for (int i=0; i<2; i++){
 		for (int j=0; j<3; j++) {
    		printf("%d\n", matrix[i][j]);
 		}
	}
	
	return 0;
}