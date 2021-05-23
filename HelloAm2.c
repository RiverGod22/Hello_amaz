#include <stdio.h>

void hello(void)
{
	printf("Hello, Amazon=) ");
	return;
}
void suka (void)
{
	printf("SUKA!!!");
	return;
}
void karman(void)
{
	printf("Derji karman shire ");
	return;
}
void grok (void)
{
	printf("Ya tebya groknu ");
	suka();
	return;
}

void main (void)
{
	hello();
	karman();
	grok();
	return;
}