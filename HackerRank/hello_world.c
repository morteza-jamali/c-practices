#include <stdio.h>

int main() {
	char input_s[100];

	scanf("%[^\n]%*c", &input_s);
	printf("Hello, World!\n%s", input_s);

	return 0;
}
