#include <stdio.h>



int main() {
    int x, y;
    scanf("%d %d", &x , &y);
    print("%d",(x>y) ? : (y>x)? y : 0);

    return 0;
}