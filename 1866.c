#include <stdio.h>

int main() {
    int C, N, i;
    scanf("%d", &N);

    for(i = 0;i < N;i++){
        scanf("%d", &C);
        if(C%2==0)
        printf("0\n");
        else printf("1\n");
    }
    return 0;
}