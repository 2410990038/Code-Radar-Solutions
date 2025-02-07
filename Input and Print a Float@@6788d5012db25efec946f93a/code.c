
#include <stdio.h>

int main() {
    float number;
    printf("Enter an integer: ");
    scanf("%f", &number);
    printf("You entered: %d\n", number);  // Print the value, not the address
    scanf("%f", &number);  // There's no need for a newline character here

    return 0;
}
