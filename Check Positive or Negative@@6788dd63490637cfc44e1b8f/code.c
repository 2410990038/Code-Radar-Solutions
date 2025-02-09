#include <stdio.h>


int main() {
    int x;
    scanf("%d",&x);
    if (x>0) {
        printf("%d is Positive",x);
    
    } else if (x<0) {
        printf("%d is Negative",x);
    } else (x==0) {
        printf("%d is Zero",x);
    }
  
    return 0;
}