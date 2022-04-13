#include <stdio.h>
int f(int i);
int f(int i)
{
	int j=0;
	printf("%d\n",i); 
	return 0;
	
}
int g(int k)
{
	printf("%d\n",k);
	return 0;
}

int main()
{
	f(5);
	g(10);
	g(f(5));
	
	
	return 0;
 } 
