#include<stdio.h>

int main(void) {
    int num;
    int sum = 0;
    for (num = 2; num <= 30; num += 2) {
        sum += num;
    }
    printf("The sum of the even numbers from 2 to 30 is %d", sum);
}