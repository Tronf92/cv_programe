#include <stdio.h>

int prim(int x){
    int i=2;
    while (i*i<x){
        if (x%i == 0)
            break;
        i++;
    }
    if ((x<-2 || x>2) && x%i == 0){
        printf("%d nu este prim", x);
        return 0;}
    else
        return 1;



}

int main()
{
    int n;
    printf("n="); scanf("%d", &n);
    if (prim(n))
        printf("Numarul este prim!");

    return 0;

}
