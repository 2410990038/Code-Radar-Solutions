#include <stdio.h>



int main() {
    int x;
    scanf("%d", &x );
    if (x % 5 == 0) {
        printf("Divisible", x);
    

    } else if (x % 11 == 0) {
        printf("Divisible", x);
    } else {
        printf("Not Divisible", x);
    }
     
  
    return 0;
}