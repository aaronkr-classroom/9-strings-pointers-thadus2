#include <stdio.h>

int main() {
	short birthday;
	short* ptr;
	ptr = &birthday;

	int intVar = 42;
	float floatVar = 3.14;
	char charVar = 'A';
	double doubleVar = 9.81;

	int* intPtr = &intVar;
	float* floatPtr = &floatVar;
	char* charPtr = &charVar;
	double* doublePtr = &doubleVar;

	printf("%p\n%p\n", &birthday, ptr);

	printf("intVar : [%d], addr : [%p]\n", *intPtr, intPtr);
	printf("floatVar : [%.2f], addr : [%p]\n", *floatPtr, floatPtr);
	printf("charVar : [%c], addr : [%p]\n", *charPtr, charPtr);
	printf("doubleVar : [%.2f], addr : [%p]\n", *doublePtr, doublePtr);

	return 0;
}