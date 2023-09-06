#include <stdio.h>

int main() {
    int i, j, n, numb, invrs;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(i=n; i>0; i--) {
        for(j=1; j<i; j++) {
            printf(" ");
        }
        for(j=i; j<=i; j++) {
            printf("*");
        }
        numb = n-i;
        invrs = (numb*2)-1;
        for(j=1; j<=invrs; j++) {
            if(i==1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        for(j=0; j<numb; j++) {
            printf("*");
            numb = 1;
        }
        printf("\n");
    }

    return 0;
}
