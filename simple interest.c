#include<stdio.h>
int main()
{
	float SI,P,R,T;
    printf("enter the simple interest\n");
    scanf("%f",&P,&T,&R);
    SI=(P*T*R)/100;
    printf("simple interest=%f",SI);
}
