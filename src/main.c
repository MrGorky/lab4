#include<stdio.h>
#include"func.h"

int main() {
	int a, b, rez;
	char f;
	printf("Enter arg1, Enter arg2, Enter func:  ");
	scanf("%d %d %c", &a, &b, &f);
	if (f == '+') 
		rez = sum(a, b);
	if (f == '-')
		rez = raz(a, b);
	if (f == '/')
		rez = del(a, b);
	if (f == '*')
		rez = proz(a, b);
	printf("rez=%d", rez);
	return 0;
}