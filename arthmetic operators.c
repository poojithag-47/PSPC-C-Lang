#include<stdio.h>
int main()
{
    int a,b,add,sub,mul,mod;
	float div;
	printf("enter two values to perform arthmetic operator");
	scanf("%d%d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	mod=a%b;
	div=(float)(a/b);
	printf("sum=%d\n substraction=%d\n multiplication=%d\n remainder=%d\n");
	printf("division=%f\n",div);
	return 0;
}
