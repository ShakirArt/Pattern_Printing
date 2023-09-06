#include <stdio.h>

int main() {
    int i, j, n, numb, invrs;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        for(j=1; j<=n-i; j++) {
            printf(" ");
        }
        numb = i;
        for(j=1; j<=i; j++) {
            printf("%d", numb);
            numb++;
        }
        invrs = (2*i)-2;
        for(j=1; j<invrs; j++) {
            printf("%d", invrs);
            invrs--;
        }
        printf("\n");
    }

    return 0;
}
