#include <stdio.h>

int main() {
    int x, y;
    
    // Input two integers
    scanf("%d %d", &x, &y);
    
    // Perform bitwise left shift by 1 on both x and y and print the results
    printf("%d", (x << 1), (y << 1));
    
    return 0;
}