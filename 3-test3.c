#include <stdio.h>
int main(void)
{
	int i, j, k = 0; // �̸�, �а�, �й�

	char str[2][3][20] = {'a'};

	for (i = 0; i < 2; i++){
		printf("�л�%d�� �̸�:", i + 1);
		gets(str[i][0]);
		printf("�л�%d�� �а�:", i + 1);
		gets(str[i][1]);
		printf("�л�%d�� �й�:", i + 1);
		gets(str[i][2]);
	}

	for (i = 0; i < 2; i++) {
		printf("\n\n �л�%d", i + 1);
		for (j = 0; j < 3; j++) {
			printf("\n\t");
			for (k = 0; str[i][j][k] != '\0'; k++) {
				printf("%c", str[i][j][k]);


			}
		}
	}
	getchar();




}