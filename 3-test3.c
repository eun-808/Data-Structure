#include <stdio.h>
int main(void)
{
	int i, j, k = 0; // 이름, 학과, 학번

	char str[2][3][20] = {'a'};

	for (i = 0; i < 2; i++){
		printf("학생%d의 이름:", i + 1);
		gets(str[i][0]);
		printf("학생%d의 학과:", i + 1);
		gets(str[i][1]);
		printf("학생%d의 학번:", i + 1);
		gets(str[i][2]);
	}

	for (i = 0; i < 2; i++) {
		printf("\n\n 학생%d", i + 1);
		for (j = 0; j < 3; j++) {
			printf("\n\t");
			for (k = 0; str[i][j][k] != '\0'; k++) {
				printf("%c", str[i][j][k]);


			}
		}
	}
	getchar();




}