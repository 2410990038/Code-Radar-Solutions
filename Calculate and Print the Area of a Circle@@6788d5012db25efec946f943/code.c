#include <stdio.h>



int main() {
    int radius;
    printf("enter a radius:");
    scanf("%d\n",&radius);
    int area=3.14*radius*radius;
    printf("Area: %.2d\n",area);


    return 0;
}