#include <stdio.h>



int main() {
    char a;
    scanf("%c",&a);
    if (isupper(a)) {
        printf("Uppercase",a);
    } else if (islower(a)) {
        printf("Lowercase",a);

    } else {
        printf("Not an alphabet",a);
    }

    return 0;
}