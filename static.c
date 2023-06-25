//Static Storage Class
#include<stdio.h>

void main()
{
	int count=5;
	while(count--)
	display();
}
void display()
{
    static int i=5;
    i++;
	printf("\n i=%d",i);
}
