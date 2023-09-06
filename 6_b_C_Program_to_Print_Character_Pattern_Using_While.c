#include <stdio.h>

int main() {
    int i = 65, a, j;
    printf("Enter a number : ");
    scanf("%d", &a);
    while(i<a+65) {
        j = 0;
        while(j<=i-65) {
            printf("%c ", i);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
