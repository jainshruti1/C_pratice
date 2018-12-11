#include<stdio.h>
void fun(int a);

void fun(int a)
{
	printf("Hello fun");
}


int main(void)
{
	fun(10, "shruti");
	printf("Hello Main");
}
