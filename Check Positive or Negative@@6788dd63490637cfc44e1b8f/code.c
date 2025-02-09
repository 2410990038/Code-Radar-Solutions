#include <stdio.h>


int main() {
    int x;
    scanf("%d",&x);
    if (x>0) {
        printf("%d: Positive",x);
    
    } else if (x<0) {
        printf("%d: Negative",x);
    } else (x=0) {
        printf("%d: Zero",x);
    }
  
    return 0;
}