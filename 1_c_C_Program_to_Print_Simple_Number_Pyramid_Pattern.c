#include <stdio.h>

int main() {
    int i, a, j;
    printf("Enter a number : ");
    scanf("%d", &a);
    for(i=1; i<=a; i++) {
        for(j=0; j<a-i; j++) {
            printf(" ");
        }
        for(j=1; j<=i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
