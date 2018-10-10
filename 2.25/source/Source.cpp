
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int d = 4,f,g = 3;
	for (int a = 1;a <= 9;a++) {
		printf("L");
	}printf("\n");
	for (int b = 1;b <=4;b++) {
		for (int  c = 1;c <= d;c++) { printf(" "); }
		printf("L");
		for (int i = 1;i <= g;i++) { printf(" "); }
		printf("L");printf("\n");
		
		
		if (b == 3) { d += 1;g -= 2; }

	}
	printf("\n");
	int x, z;
	for (int d = 1;d <= 5;d++) {
		if (d == 3) { x = 1; }
		if (d == 1) { z = 2;x = 2; }
		if (d == 2) { z = 1;x = 1; }
		if (d == 4) { z = 1;x = 1; }
		if (d == 5) { z = 2;x = 7; }
		for (int b = 1;b <= z; b++) { printf(" "); }
		for (int c = 1;c <= x;c++) { printf("Z"); }
	
		
		printf("\n");
		z -= 1;
		x -= 1;
	}   int c, u,m=0,n,p=7;
	printf("KKKKKKKKK");
	printf("\n");
	for (c = 1;c <= 3;c++) {
		for (u = 1;u <= m;u++) { printf(" "); }
		printf("K");
		for (n = 1;n <= p;n++) {
			printf(" ");

		}printf("K");

		
		
		if (c == 2) { m += 1;p=5; }
		printf("\n");
	}
	printf("  KKKKK  ");

	
	
	
	
		
		
	
	
	
	
	system("pause");
	return 0;
}