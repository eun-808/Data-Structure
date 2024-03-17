#include <stdio.h>

int main(void)
{
	char str[20] = {0,};
	int length;

	printf("문자열을 입력하세요: ");
	gets(str);
	printf("입력된 문자열은\n");
	puts(str);
	printf("입니다.\n\n");

	length = sizeof(str) / sizeof(0);

	printf("입력된 문자열의 길이 = %d", length);

}
