#include <stdio.h

int main() {
    int i, a, j;
    printf("Enter the row : ");
    scanf("%d", &a);
    for(i=a; i>0; i--) {
        for(j=1; j<=i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
