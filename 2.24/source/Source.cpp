#include<stdio.h>
#include<stdlib.h>
int main(void) { 
	int a;
	printf("請輸入數字:");
	scanf_s("%d",&a);
	if (a % 2 == 0) {
		printf("偶數");
	}
	else printf("奇數");
	printf("\n");
	
	system("pause");
	return 0;
	

}