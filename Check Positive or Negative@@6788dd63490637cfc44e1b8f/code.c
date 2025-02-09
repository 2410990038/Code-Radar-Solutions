#include <stdio.h>

int main() {
    int x;

    
    scanf("%d", &x);
    
   
    if (x > 0) {
        printf("%d\n: Positive", x);
    } else if (x < 0) {
        printf("%d\n: Negative", x);
    } else {
        printf("%d\n: Zero", x);
    }

    return 0;
}
