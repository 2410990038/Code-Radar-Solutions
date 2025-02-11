#include <stdio.h>



int main() {
    int x;
    int y;
    int z;
    scanf("%d %d %d", &x,&y,&z);
    if (x==y&&y==z&&z==x) {
        printf("Eqilateral");
    } else if (x==y||y==z||z==x) {
        printf("Isosceles");
        
    } else {
        printf("Scalene");
    }
   
    return 0;
}