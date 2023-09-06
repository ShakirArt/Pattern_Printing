#include <stdio.h>

int main() {
    int i, n, j, f = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            f++;
        }
    }
    for(i=1; i<=n; i++) {
        for(j=n-i; j>=0; j--) {
            f--;
            printf("%d ", f);

        }
        printf("\n");
    }

    return 0;
}


