#include<stdio.h>
#include "func.h"

int sum(int a, int b){
	int rez;
	rez = a + b;
	return rez;
}

int raz(int a, int b){
	int rez;
	rez = a - b;
	return rez;
}

int del(int a, int b){
	int rez;
	rez = a / b;
	return rez;
}

int proz(int a, int b){
	int rez;
	rez = a * b;
	return rez;
}