#include<stdio.h>
#include<stdlib.h>
int main(void) {
	float a, b, c, d, e;
	float SUM;
	printf("�@��Ѫ��`���{��\n");
	scanf_s("%f", &a);
	printf("�T�o�@����/�[�ڦh�ֿ�\n");
	scanf_s("%f", &b);
	printf("�����@����/�[�گ��p�h�֤���\n");
	scanf_s("%f", &c);
	printf("�@�Ѫ������O\n");
	scanf_s("%f", &d);
	printf("�@�Ѫ��q��O(�L���O)\n");
	scanf_s("%f", &e);
	SUM = (a / c * b) + d + e;
	printf("sum= %f", SUM);
	system("pause");
	return 0;

}