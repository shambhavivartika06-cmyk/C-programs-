#include <stdio.h>

int main() {
    int n, i, k = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            k = 1;
            break;
        }
    }

    if(n == 1)
        printf("Not prime");
    else if(k == 0)
        printf("Prime number");
    else
        printf("Not prime");

    return 0;
}
