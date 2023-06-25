//Automatic(Auto) Storage Classes
#include<stdio.h>
void main()
{
	auto int a=50;
	{
		auto int b=100;
		printf("\n b=%d",b);
	}
	printf("\n a=%d",a);
}
