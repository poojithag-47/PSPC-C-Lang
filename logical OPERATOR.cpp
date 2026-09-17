#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three number to perform logical operation");
	scanf("%d%d%d",&a,&b,&c);
	printf("(%d > %d)&& (%d > %d) = %d\n",a,b,a,c,(a>b)&&(a>c));
	printf("(%d > %d)|| (%d > %d) = %d\n",a,b,a,c,(a>b)||(a>c));
	printf("!(%d > %d)= %d\n" ,a,b,!(a>b));
	printf("note: the result of above of \'1\' it is true and \0'\' it is false");
	return 0;
}
