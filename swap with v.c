#include<stdio.h>
int main()
{
	int x,y,temp;
	printf("enter two values\n");
	scanf("%d%d",&x,&y);
	temp=x;
	x=y;
	y=temp;
	printf("x=%d y=%d\t",x,y);
	return 0;
}
