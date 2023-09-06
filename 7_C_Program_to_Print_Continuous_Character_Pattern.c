#include <stdio.h>

int main() {
    int i, n, j;
    char abc = 'A';
    printf("Enter a number : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            printf("%c ", abc);
            abc++;
        }
        printf("\n");
    }
    return 0;
}
