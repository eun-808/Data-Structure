#include <stdio.h>

int main(void)
{
	char str[20] = {0,};
	int length;

	printf("���ڿ��� �Է��ϼ���: ");
	gets(str);
	printf("�Էµ� ���ڿ���\n");
	puts(str);
	printf("�Դϴ�.\n\n");

	length = sizeof(str) / sizeof(0);

	printf("�Էµ� ���ڿ��� ���� = %d", length);

}
