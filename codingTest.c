#include <stdio.h>
int fn(int n) {
    if(n<=1)
        return 1;
    else
        return n*fn(n-1);
}
void main() {
    printf("%d", fn(4));
}



