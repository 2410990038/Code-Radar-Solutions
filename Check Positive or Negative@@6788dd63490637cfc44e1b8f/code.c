#include <stdio.h>


int main() {
    int x;
    scanf("%d",&x);
    if (x>0) {
        printf("%d: Positive",x);
    
    } else if (x<0) {
        printf("Negative",x);
    } else (x=0) {
        printf("Zero",x);
    }
  
    return 0;
}