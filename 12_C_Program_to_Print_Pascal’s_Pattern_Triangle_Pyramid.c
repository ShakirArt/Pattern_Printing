#include <stdio.h>
#include <math.h>

int fact(int x){
    int y=1;
    if(x<2) {
        return 1;
    }
    else {
        for(int i=1; i<=x; i++) {
            y*=i;//y=y*i
        }
           return y;
    }
 }
int nCr(int i, int j) {
    int r;
    r = (fact(i)/(fact(i-j)*fact(j)));
    return r;
}
int main(){
    int n, i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=0; j<(n-i); j++) {
            printf(" ");
        }
        for(j=0; j<=i; j++) {
            printf("%d ", nCr(i,j));
        }
        printf("\n");
    }
    return 0;
}
