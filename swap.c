#include <stdio.h>
void main ()
{
	int a,b;
	printf ("swaping numbers\n");
	printf("enter the value of a\n");
	scanf("%d",&a);
	printf ("enter the value of b\n");
	scanf ("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf ("after swapping");
	printf("\n a=%d",a);
	printf("\n b=%d",b);

}