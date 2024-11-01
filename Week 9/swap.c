#include <stdio.h>

void Swap1(int start, int end) {
	int tmp = 0;
	tmp = start;
	start = end;
	end = tmp;
}
void Swap2(int* start, int* end) {
	int tmp = 0;
	tmp = *start;
	*start = *end;
	*end = tmp;
}
int main() {
	int start = 96, end = 5;

	printf("Swap 1:\n");
	printf("before : start = %d, end = %d\n", start, end);

	if (start > end) Swap1(start, end);
	printf("after : start = %d, end = %d\n", start, end);

	printf("\nSwap 2:\n");
	if (start > end) Swap2(&start, &end);
	printf("after : start = %d, end = %d\n", start, end);

	return 0;
}