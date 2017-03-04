#include <stdio.h>
#include <stdlib.h>
#define NR 100 //maxim 100 de cuvinte citite
#define LUNG 80 //un cuvant maxim 80 caractere

char* tab_cuv[NR];
int nr_cuv=0;

void citire_cuv(void){
    int i;
    char cuv_crt[LUNG];
    printf("Introduceti maxim %d de cuvinte terminati cu ctrl/z\n",NR);
    while(nr_cuv<NR && gets(cuv_crt)){
       if((tab_cuv[nr_cuv]= (char *)malloc(strlen(cuv_crt)+1))==NULL){
       printf("Spatiu insuficient");
       exit(1);
       }
    strcpy(tab_cuv[nr_cuv],cuv_crt);
    nr_cuv++;
    }
}


int main(){
    int j;
    citire_cuv();
    for(j=0;j<nr_cuv;j++){
        printf("%s",tab_cuv[j]);
    }
}




