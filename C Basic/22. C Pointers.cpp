#include<stdio.h>
int main(){
	int myAge = 43;     
	int* ptr = &myAge;  


	printf("%d\n", myAge);//43
	printf("%p\n", &myAge);//Address
	
	printf("%d\n", *ptr);//43
	printf("%p\n", ptr);//Address
	
	return 0;
}
