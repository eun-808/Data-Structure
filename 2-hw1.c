#include <stdio.h>

int main() {
    char* info1[] = { "Korea", "Seoul", "Mapo", "152���� 2/3" };
    char* info2[] = { "Korea", "Seoul", "Jongno", "152���� 2/3" };

    for (int i = 0; i < 4; i++) {
        printf("%s\n", info1[i]);
    }
    printf("\n");

    for (int i = 0; i < 4; i++) {
        printf("%s\n", info2[i]);
    }

    return 0;
}
