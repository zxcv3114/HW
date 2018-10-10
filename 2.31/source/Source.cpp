#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int a,b,c;
	
	printf("number   square   cube\n");
	for (a = 0;a <= 10;a++) {
		b = a * a;c = b * a;
		printf("%d\t", a);
		printf(" %d\t", b);
		printf("  %d\n", c);
		
	}


	system("pause");
	return 0;
}