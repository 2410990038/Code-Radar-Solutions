#include<stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    if (x/3==0) {
        printf("Divisible");
    } else if (x/5==0) {
        printf("Divisible");
    } else if (x/3==0 && x/5==0) {
        printf("Divisible by both");
    } else {
        printf("Neither");
    }
    return 0;
}