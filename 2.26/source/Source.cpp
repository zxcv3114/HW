#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int a,b;
	printf("請輸入數字:");
	printf("\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
		if (a%b == 0) {
			printf("a是b的倍數\n");
		}
		else printf("a不是b的倍數\n");
	system("pause");
	return 0;

}
