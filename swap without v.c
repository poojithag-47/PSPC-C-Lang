#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two values\n");
	scanf("%d%d",&a,&b);
	printf("first swaping a=%d,b=%d\n");
	a=a+b;
	b=a-b;
	a=a-b;
	printf("second swaping a=%d,b=%d\n",a,b);
	return 0;

}
