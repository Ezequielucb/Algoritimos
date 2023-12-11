#include <stdio.h>

float ValorLanche(int x, int y)
{

        if (x == 1)
            return y * 4.00;
        else if (x == 2)
            return y * 4.50;
        else if (x == 3)
            return y * 5.00;
        else if (x == 4)
            return y * 2.00;
        else if (x == 5)
            return y * 1.50;
    }


int main(){
    int X, Y;

    scanf("%d %d", &X , &Y);
    printf("Total: R$ %.2f\n", ValorLanche(X, Y));

    return 0;
}