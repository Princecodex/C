#include<stdio.h>
int main()
{
    int a, b;
    a = 2;
    b = 3;

    printf("a + b = %d\n", a+b);//add
    printf("a - b = %d\n", a-b);//sub
    printf("a * b = %d\n", a*b);//Multi
    printf("a / b = %d\n", a/b);//Devi
    printf("a % b = %d\n\n", a%b);//Mode
    
    printf("a<b  =%d\n",a<b);
    printf("a>b  =%d\n",a>b);
    printf("a<=b =%d\n",a<=b);
    printf("a>=b =%d\n",a>=b);
    printf("a==b =%d\n",a==b);
    printf("a!=b =%d\n\n",a!=b);
    
    printf("a<b & a>b %d\n",a<b & a>b);
    printf("a<b | a>b %d\n\n",a<b | a>b);
    
    printf("++a = %d\n", ++a);
    printf("a = %d\n", a);
    printf("--a = %d\n", --a);
    printf("a = %d\n", a);
    printf("a++ = %d\n", a++);
    printf("a = %d\n", a);
    printf("a-- = %d\n", a--);
    printf("a = %d\n", a);

    return 0;
}