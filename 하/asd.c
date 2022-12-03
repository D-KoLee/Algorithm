#include <stdio.h>

void print(int *pi, int size);
void increment(int *pi, int size, int inc);
 
int main(void)
{
        int data[] = {3, 21, 35, 57, 24, 82, 8};      
        int inc;

        print(data, sizeof(data)/sizeof(int));
        printf("배열의 각 원소에 더할 정수를 입력하세요. -> ");
        scanf("%d", &inc);

        increment(data, sizeof(data)/sizeof(int), inc);
        print(data, sizeof(data)/sizeof(int));
        return 0;
}

void print(int *pi, int size)
{
        int i;
        printf("배열 원소값을 출력\n");
        for (i = 0; i < size; i++) {
               printf("%d%s", pi[i], i == size - 1 ? "\n\n" : ", ");
        }
}

void increment(int *pi, int size, int inc)
{
        int i;
        for (i = 0; i < size; i++) {
               pi[i] += inc;
        }
} 