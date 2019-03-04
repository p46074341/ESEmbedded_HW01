#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }
int main()
{
	int a, c;
	char b;
	typedef int func(int,int);
	func *p[4]={plus, minus, multiply, divided};
	char* op[4]={'+','-','*','/'};
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
	for(int i=0;i<4;i++)
		{ 
		if(b==op[i])
			printf("%d %c %d = %d\n", a, b, c, p[i](a, c));
		}
	/*
	if (b == '+')
		printf("%d %c %d = %d\n", a, b, c, plus(a, c));
	else if (b == '-')
		printf("%d %c %d = %d\n", a, b, c, minus(a, c));
	else if (b == '*')
		printf("%d %c %d = %d\n", a, b, c, multiply(a, c));
	else if (b == '/')
		printf("%d %c %d = %d\n", a, b, c, divided(a, c));
	*/
}
