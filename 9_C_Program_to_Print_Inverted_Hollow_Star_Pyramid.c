#include <stdio.h>

int main() {
    int i, j, n, numb, invrs;
    printf("Enter a number : ");
    scanf("%d", &n);
    invrs = (n*2)-1;
    for(j=0; j<invrs; j++) {
        printf("*");
    }
    printf("\n");
    for(i=n-2; i>=0; i--) {
        for(j=1; j<n-i; j++) {
            printf(" ");
        }
        for(j=2*i; j>=0; j--) {
            if(j==0 || j==2*i) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
