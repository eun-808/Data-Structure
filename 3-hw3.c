#include <stdio.h>
int main(void)
{
	char student[2][3][20] = { 0 };
	int i, j, k;

	for (i = 0; i < 2; i++) {
		printf("\n�л�%d�� �̸� : ", i+1);
		gets(student[i][0]);
		printf("�л� %d�� �а� : ", i+1);
		gets(student[i][1]);
		printf("�л� %d�� �й� : ", i+1);
		gets(student[i][2]);

	}
	for (i = 0; i < 2; i++){
		printf("\n\t �л� %d", i + 1);
		for (j = 0; j < 3; j++) {
			printf("\n\t");
			for (k = 0; student[i][j][k] != '\0'; k++) {
				printf("%c", student[i][j][k]);
			}
		}

	}
}