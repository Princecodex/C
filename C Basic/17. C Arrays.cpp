#include<stdio.h>
int main(){
	int myNumbers[] = {25, 50, 75, 100};
	
	printf("%d\n", myNumbers[0]);
	printf("%d\n", myNumbers[1]);
	printf("%d\n", myNumbers[2]);
	printf("%d\n", myNumbers[3]);
	
	printf("\nPrinting array using for loop\n");
	for(int i=0; i<4; i++) {
		printf("%d\n", myNumbers[i]);
	}
	
	return 0;
}