#include <stdio.h>

int main() {
    int x, y; 
    scanf("%d %d", &x, &y); 

    if (x > y) {
        printf("Profit\n"); 
    } else if (x < y) {
        printf("Loss\n");
    } else {
        printf("No Profit No Loss\n"); 
    }

    return 0;
}
