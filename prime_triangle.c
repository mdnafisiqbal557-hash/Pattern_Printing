#include <stdio.h>
int main(){
    int i, j, n = 5,c,p,k;
    c = 2;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            for (;;){
                p = 1;
                for (k = 2; k < c; k++){
                    if (c % k == 0){
                        p = 0;
                        break;
                    }
                }
                if (p == 1)
                    break;
                c++;
            }
            printf("%d ", c);
            c++;
        }
        printf("\n");
    }
}