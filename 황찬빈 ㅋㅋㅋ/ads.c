#include <stdio.h>
/*
int main()
{
    int num;
    printf("황찬씨 정수를 입력하세요 : ");
    scanf("%d", &num);
    switch((num%2)) {
            
        case 0:
            if(num == 0) {
                printf("황찬빈씨 %d는 짝수도 홀수도 아닙니다.\n", num);
                break;
            } 
            printf("황찬빈씨 %d는 짝수입니다.\n", num);
            break;
        case 1:
            printf("황찬빈씨 %d는 홀수입니다.\n", num);
            break;
        default:
            break;
    }
    return 0;
}*/

int main(void) {
    int num;
    int total = 0, odd_total = 0, even_total = 0;
    int i;

    printf("황찬빈씨 정수를 입력하세요 : ");
    scanf("%d", &num);

    for(i = 1; i <= num; i ++) {
        total += i;
    }

    i = 1;
    while(i<=num)
    {
        odd_total += i;
        i += 2;
    }

    i = 2;
    do{
        even_total += i;
        i += 2;
    } while(i <= num);

    printf("황찬빈씨 1부터 %d까지의 합계는 다음과 같습니다 : %d\n", num, total);
    printf("황찬빈씨 1부터 %d까지의 홀수의 합계는 다음과 같습니다 : %d\n", num, odd_total);
    printf("황찬빈씨 1부터 %d까지의 짝수의 합계는 다음과 같습니다 : %d\n", num, even_total);

    return 0;
}