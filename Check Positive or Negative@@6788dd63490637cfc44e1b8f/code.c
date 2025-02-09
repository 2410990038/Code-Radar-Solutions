#include <stdio.h>

int main() {
    int x;

    
    scanf("%d", &x);
    
   
    if (x > 0) {
        printf("Positive", x);
    } else if (x < 0) {
        printf("Negative", x);
    } else {
        printf( "Zero", x);
    }

    return 0;
}
