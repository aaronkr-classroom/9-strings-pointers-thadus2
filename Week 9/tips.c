#include <stdio.h>

void Test(short data) {
	short soft = 0;
	soft = data;
	printf("soft = %d\n", soft);

	data = 3;
}

void Test2(short* ptr) {
	short soft = 0;
	soft = *ptr;
	printf("soft = %d\n",soft);

	*ptr = 3;
}

int main() {
	short tips = 5;
	printf("tips = %d\n", tips);
	Test(tips);
	Test2(&tips);

	printf("tips = %d\n", tips);

	return 0;
}