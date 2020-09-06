#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	char words[20];
	printf("Input words : ");
	gets_s(words);
	printf("This length is %d\n", strlen(words));

	int *sloop,s,n,i,j;
	sloop=&s;
	printf("\nInput number : ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		s = n - i;
		for (int j = 1; j <= s; j++) {
			printf("  ");
		}
		for (j = 1; j <= n - s; j++) {
			printf("%d ", j);
		}
		for (j = n - s - 1; j >= 1; j--) {
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}