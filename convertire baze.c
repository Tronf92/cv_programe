#include <stdio.h>
int a[32];

int trbaza(int x,int b){
    int i=0;
    while(x>0) a[i++]=x%b, x /=b;
    while (--i>=0) printf("%d ",a[i]);
}

int main()
{
    int n,b;
    printf("Introduceti un nr in baza 10.");
    scanf("%d",&n);
    printf("Introduceti baza.");
    scanf("%d",&b);
    trbaza(n,b);


    return 0;

}
