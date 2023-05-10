#include<stdio.h>
int main(){
	int a=15;
	char b='P';
	float c=14.67;
	double d=1987.4598;
	
	printf("%d\n",sizeof(a));
	printf("%c\n",sizeof(b));
	printf("%f\n",sizeof(c));
	printf("%lf\n",sizeof(d));
	
	return 0;
}