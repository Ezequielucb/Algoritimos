#include <stdio.h>
int main(){
    int g, h, l, c;
    float cardapio[7]={1.50,2.50,3.50,4.50,5.50}, cal;
    while(scanf("%d",&l)!=EOF){
        cal = 0;
        for(g = 0;g < l;g++){
            scanf("%d %d", &h, &c);
            h = h % 1000;
            cal += c * cardapio[h-1];
        }
        printf("%.2f\n", cal);
    }
    return 0;
}