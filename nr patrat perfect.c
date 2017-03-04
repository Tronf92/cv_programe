#include <stdio.h>
int estepatrat(int x){
    int i=0;
    while (i*i<x){
        i++;
    }
    if (i*i== x)
        return 0;

    else
        return 1;
}
int main()
{
    int x;
    printf("Introduceti un numar intreg:");
    scanf("%d",&x);
    if(estepatrat(x)==0)
        printf("\n Numarul %d este patrat perfect",x);
    else
        printf("\nNumarul %d nu este patrat perfect",x);
    return 0;

}
