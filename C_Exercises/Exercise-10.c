#include <stdio.h>

int main(){
	short a;
	long b;
	long long c;
	long double d;
	
	printf("Size of short = %ld bytes\n", sizeof(a));
	printf("Size of long = %ld bytes\n ", sizeof(b));
	printf("Size of long long = %ld bytes\n ", sizeof(c));
	printf("Size of long double = %ld bytes\n ", sizeof(d));
	return 0;
}
