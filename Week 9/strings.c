#include <stdio.h>
#include <string.h>

int main() {

	char hello[6] = { 'H','e','l','l','o',0 };
	char world[6] = { 'W','o','r','l','d',0 };
	char ment[] = "C is fun!~";
	printf("%s %s\n%s\n", hello, world, ment);

	char str1[128] = "Don't worry, be happy!";
	char str2[128] = "걱정 마. 행복할 거야.";
	printf("%s\n%s", str1, str2);

	return 0;
}