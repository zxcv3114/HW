#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int a, b, c ;
	printf("�п�J�T�ӼƦr");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > c and c > b) { a = a;b = c;c = b; }
	if (a > b and b > c) { a = a;b = b;c = c; }
	if (b > c and c > a) { a = b;b = c;c = a; }
	if (b > a and a > c) { a = b;b = a;c = c; }
	if (c > a  and a>b) {
		a = c;b = a;c = b;}
	if (c>b  and b>a  ) { a = c;b = b;c = a; }
	



	
	printf("�̤j�Ʀr��:%d\n", a);
	printf("�̤p�Ʀr��:%d\n", c);
	system("pause");
	return 0;

}