#include <stdio.h>


int main() {
    int x,y;
    scanf("%d",&x,&y);
    if (y != 0 && x %y == 0) {
        printf("Yes");
    } else  if (y == 0) {
        printf("No");
    } else {
        printf("No");
    }

    return 0;
}