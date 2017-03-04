#include <stdio.h>
#include <string.h>
#include <conio.h>
/*int streql(char *str1, char *str2){
    while((toupper(*str1) == toupper(*str2))&& (*str1)){
        str1++;
        str2++;

    }
    return ((*str1== NULL)&&(*str2==NULL));
}
*/
void delline(void);
void main(void)
{

    int linie;


    for(linie=1; linie < 25;linie++){
        printf("Aceasta este linia %d\r\n",linie);}
        printf("Apasati o tasta pentru a contiuna:");
        getch();
        gotoxy(1,12);
        for(linie=12;linie<15;linie++){
            delline();
            gotoxy(1,25);
        }



}
