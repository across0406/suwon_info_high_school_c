#include <stdio.h>

int main() {
	int i = 0, j = 0;
	/*
	for (int i = 0; i >= -3000; i--) {
		printf("moongTangE World %d\n",i);
	}

	printf("춘잣!\n");

	while (i > -3000) {
		printf("두 %d\n", i--);
	}
	*/
	/*
	for (i = 1; i < 100; i++) {
		j = i + j;
		printf("%d + ", i);
	}
	
	printf("%d = %d", i++, i+j-1);
	*/

	/*
	//직각삼각형
	
	printf("직각삼각형\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	//형각삼각직
	printf("형각삼각직\n");
	for (i = 0; i < 5; i++) {
		for (j = 4; j > i;j-- ) {
			printf(" ");
		}
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	//피라미드
	printf("피라미드\n");
	for (i = 0; i < 10; i++) {
		for (j = 9; j > i; j--) {
			printf(" ");
		}
		for (j = 0; j <= i*2; j++) {
			printf("*");
		}
		printf("\n");
	}

	//피라미드미라피

	printf("피라미드미라피\n");
	for (i = 0; i < 10; i++) {
		for (j = 9; j > i; j--) {
			printf(" ");
		}
		for (j = 0; j <= i * 2; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 8; i >= 0; i--) {
		for (j = 9; j > i; j--) {
			printf(" ");
		}
		for (j = 0; j <= i * 2; j++) {
			printf("*");
		}
		printf("\n");
	}
	*/
	                
	int a[5][5] = { 0 };
	int b;

	printf("%d", a[0][1]); //2출력
	printf("%d\n\n", a[1][3]); //9출력
	for (i = 0; i < 5;i++) {
		printf("%d", a[j][i]);
		

	}





}