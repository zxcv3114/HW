#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	/*1*/
	int i, j;
	for (i = 1;i <= 9;i++)
	{
		for (j = 1;j <= 9;j++)
		{
			if (i == 1 || i == 9) {
				printf("*");
			}
				else if (i!=1||i!=9) {
					if (j == 1 || j == 9) {
					printf("*");
					}
					else printf(" ");
				}
		}
		printf("\n");
	}
	printf("\n");
	/*2*/
	int a, b;
	for (a = 1;a <= 9;a++) {
		for (b = 1;b <= 9;b++) {
			if (a == 1 || a == 9) {
				if (b == 4 || b == 5 || b == 6)printf("*");
				else  printf(" ");
			}
			else if (a == 2 || a == 8) {
				if (b == 2 || b == 8)printf("*");
				else printf(" ");
			}
			else if (a != 1 || a != 2 || a != 8 || a != 9) {
				if (b == 1 || b == 9)printf("*");
				else printf(" ");

			}




			
		}
		printf("\n");
	}
	/*3*/
	int c, d, e=2,f,g=1;
	for (c = 1;c <= 3;c++) {
		for (d = 1;d <=e ;d++) {
			printf(" ");
		}
		for (f = 1;f <= g;f++) 
		{
			printf("*");
		}
		g += 2;
		e -= 1;
		printf("\n");
	}
	for (c = 1;c <= 6;c++) {
		printf("  *");
		printf("\n");
	}
	/*4*/
	int z,x,v;
	int k = 4, w = 0;
	for (z = 1;z <= 5;z++) {
		if (z == 2) {
			w = 1;
		}
			for (x = 1;x <= k;x++) {
			printf(" ");
			}
			printf("*");
			k -= 1;
		for (v= 1;v <= w;v++) {
			printf(" ");
		}
		if (z != 1) {
			printf("*");
		}
		w += 2;
		printf("\n");
	}
	w = 5;
	k = 1;
	for (z = 6;z <= 9;z++) {
		
		if (z==9 ) {
			w = 0;
		}
		for (x = 1;x <= k;x++) {
			printf(" ");
		}
		printf("*");
		k += 1;
		for (v = 1;v <= w;v++) {
			printf(" ");
		}
		w -= 2;
		if (z !=9) {
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}