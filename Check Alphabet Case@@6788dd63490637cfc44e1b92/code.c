#include <stdio.h>
#include<ctype.h>


int main() {
    char c;
    scanf("%c",&c);
    if (isupper(c)) {
        printf("Uppercase",c);
    } else if (islower(c)) {
        printf("Lowercase",c);

    } else {
        printf("Not an alphabet",c);
    }

    return 0;
}