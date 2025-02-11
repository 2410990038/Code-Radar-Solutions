#include <stdio.h>



int main() {
    int x;
    int y;
    int z;
    scanf("%d %d %d", &x,&y,&z);
    if (x==y==z) {
        printf("Eqilateral");
    } else if (x==y!=z) {
        printf("Isosceles");
        
    } else {
        printf("Scalene");
    }
   
    return 0;
}