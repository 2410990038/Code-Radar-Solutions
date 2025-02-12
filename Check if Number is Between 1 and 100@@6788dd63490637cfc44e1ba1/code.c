#include<stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    if (x < 1 || x > 100) {
        printf("Out of Range");
    } else {
        printf("In Range");
    }
    return 0;
} 