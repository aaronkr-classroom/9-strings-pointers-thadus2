#include <stdio.h>

int main(void)
{
	int x = 10,
		y = 20;

	int* const p1 = &x;	
	*p1 = 15;
	printf("p1 points to value: %d\n", *p1);

	const int* p2 = &x; 
	p2 = &y;
	printf("p2 points to value: %d\n", *p2);

	const int* const p3 = &x; 
	printf("p3 points to value: %d\n", *p3);

	getch();
	return 0;
}