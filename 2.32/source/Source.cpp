#include<stdio.h>
#include<stdlib.h>
int main(void) {
	float a, b,c;
	printf("�п�J����(meter)\n");
	scanf_s("%f", &a);
	printf("�п�J�魫(kilogram)\n");
	scanf_s("%f", &b);
	c = b / (a * a);
	if (c < 18.5) { printf("underweight"); }
 if (18.5<=c&c<=24.9) { printf("normal"); }
	 if (25 <= c& c <= 29.9) { printf("overweight"); }
	if (c >=30) { printf("obese"); }
	printf("\n");
	printf("%f", c);
	printf("\n");
	system("pause");
	return 0;

}