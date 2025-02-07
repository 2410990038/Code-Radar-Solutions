
#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("You entered: %d\n", number);  // Print the value, not the address
    scanf("%d", &number);  // There's no need for a newline character here

    return 0;
}
