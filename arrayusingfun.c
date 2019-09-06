
//call by value 
#include<stdio.h>

void fun(int);
int main()
{
 int i ; 
	int mark[]={90,43,53,23,45,32};
	for (i=0;i<=7;i++)
	fun(mark[i]);
	return 0 ; 
}
void fun(int m)
{
	printf("%d\n",m);
}	
	
