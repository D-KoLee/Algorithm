#include <stdio.h>

struct person {
    char *name[20];
    char *phone[20];
    char *address[1000];
};

int main() {
    struct person phj;
    struct person kyt;
    struct person kjs;

    printf("이름: "); scanf("%s", phj.name);
    printf("전화번호: "); scanf(" %s", phj.phone);
    printf("주소: "); scanf(" %[^\n]s", phj.address);

    printf("이름: "); scanf("%s", kyt.name);
    printf("전화번호: "); scanf(" %s", kyt.phone);
    printf("주소: "); scanf(" %[^\n]s", kyt.address);

    printf("이름: "); scanf("%s", kjs.name);
    printf("전화번호: "); scanf(" %s", kjs.phone);
    printf("주소: "); scanf(" %[^\n]s", kjs.address);

    printf("이 름\t\t전 화 번 호\t\t주 소\n\n");
    printf("%s\t\t%s\t\t%s\n", phj.name, phj.phone, phj.address);
    printf("%s\t\t%s\t\t%s\n", kyt.name, kyt.phone, kyt.address);
    printf("%s\t\t%s\t\t%s\n", kjs.name, kjs.phone, kjs.address);

    return 0;
}