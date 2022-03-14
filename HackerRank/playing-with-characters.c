#include <stdio.h>

int main(void) {
	char ch;
	char s[100];
	char sen[100];

	scanf("%c", &ch);
	scanf("%s", &s);
	scanf("%[^\n]%*c", &sen);

	printf("%c", ch);
	printf("%s", s);
	printf("%[^\n]%*c", sen);

	return 0;
}
