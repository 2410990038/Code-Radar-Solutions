#include <stdio.h>

int main() {
    int x, y; // x for selling price, y for cost price
    scanf("%d %d", &x, &y); // Input selling price and cost price

    if (x > y) {
        printf("Profit\n"); // Selling price is greater than cost price
    } else if (x < y) {
        printf("Loss\n"); // Cost price is greater than selling price
    } else {
        printf("No Profit No Loss\n"); // Selling price equals cost price
    }

    return 0;
}
