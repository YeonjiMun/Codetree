#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b;

    scanf("%d %d", &a, &b);

    if(a < b) {
        printf("1 ", a, b);
    } else
        printf("0 ", a, b);

    if(a == b) {
        printf("1", a, b);
    } else
        printf("0", a, b);

    return 0;
}