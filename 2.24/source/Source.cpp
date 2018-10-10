#include<stdio.h>
#include<stdlib.h>
int main(void) { 
	int a;
	printf("叫块计:");
	scanf_s("%d",&a);
	if (a % 2 == 0) {
		printf("案计");
	}
	else printf("计");
	printf("\n");
	
	system("pause");
	return 0;
	

}