#include <stdio.h>

int main() {
    int i, a, j;
    printf("Enter a number : ");
    scanf("%d", &a);
    for(i=65; i<65+a; i++) {
        for(j=0; j<=i-65; j++) {
            printf("%c ", i);
        }
        printf("\n");
    }
    return 0;
}
