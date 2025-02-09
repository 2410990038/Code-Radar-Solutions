#include <stdio.h>



int main() {
    int x;
    scanf("%d",&x);
    if (x&1) {
        printf("%d\n,Set");
    } else {
        printf("Not Set");
    }
   
    return 0;
}