#include <stdio.h>

int main() {
    int i, a, j, x, y;
    printf("Enter a number : ");
    scanf("%d", &a);
    for(i=1; i<=a; i++) {
        for(j=1; j<=i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    for(x=a-1; x>0; x--) {
        for(y=1; y<=x; y++) {
            printf("%d ", x);
        }
        printf("\n");
    }
    return 0;
}

