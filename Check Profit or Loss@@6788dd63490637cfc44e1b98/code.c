#include <stdio.h>

int main() {
    int x, y; 
    scanf("%d %d", &x, &y); 

    if (y>x) {
        printf("Profit\n"); 
    } else if (y < x) {
        printf("Loss\n");
    } else {
        printf("No Profit No Loss\n"); 
    }

    return 0;
}
