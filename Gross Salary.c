#include<stdio.h>
int main()
{
	float BS,gross;
	printf("enter basic salary of employe\n");
	scanf("%f",&BS);
	gross=BS+0.1*BS + 0.25* BS;
	printf("gross salary=%f\n",gross);
	return 0;
}
