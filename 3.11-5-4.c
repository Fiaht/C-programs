#include<stdio.h>
int main()
{
	float a=12;
	a+=a-=a*=a;
	printf("%f\n",a);
	return 0;
}