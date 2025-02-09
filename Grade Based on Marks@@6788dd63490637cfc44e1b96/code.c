#include <stdio.h>


int main() {
    int x;
    scanf("%d", &x);
    if ("x>=90") {
        printf("A");
    } else if ("x>=80 && x<90") {
        printf("B",x);
    } else if ("x>=70 && x<80") {
        printf("C",x);
    } else if ("x>=60 && x<70") {
        printf("D",x);
    } else {
        printf("F",x);
    }
    
   
    return 0;
}