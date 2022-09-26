#include "stdio.h"

int main() {
    int range, ampersand = -1;
    reEnter:
    printf("크기를 입력하시오: ");
    scanf("%d\n", &range);
    if (range < 3) {
        printf("3 이상의 범위를 입력하시오\n");
        goto reEnter;
    }
    for (int i = 0; i < range; i++) {
        ampersand++;
        if(i == range / 2 && range % 2 == 0) i++;
        for (int j = 0; j < range; j++) {
            if (i == 0 || i == range - 1 || (j == 1 && (i == 1 || i == range - 1)) || i == j || i + j == range - 1)
                if (ampersand % 2 == 1)
                    printf("&");
                else
                    printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}