#include <stdio.h>
#include <string.h>

int main() {

	char str1[100],
		 str2[100],
		 str3[100];

	printf("Enter first string >> ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = '\0';

	printf("Enter second string >> ");
	fgets(str2, sizeof(str2), stdin);
	printf("\n-----\n");

	printf("str1�� ���� : %d\nstr2�� ���� : %d\n", (int)strlen(str1), (int)strlen(str2));

	strcpy_s(str3,sizeof(str3), str1);
	printf("���� �� str3 : %s\n", str3);

	strcat_s(str1, sizeof(str3),str2);
	printf("str1 + str2 : %s\n", str1);

	return 0;
}