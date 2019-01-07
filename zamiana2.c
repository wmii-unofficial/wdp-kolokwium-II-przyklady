/*Funkcja  zamiana2(int tab[],int rozmiar) zamienia elementy w tablicy wg zasady:
Parzyste na 0
Nieparzyste na 1*/
#include<stdio.h>
void zamiana2(int [],int);
int main()
{
    const int rozmiar=11;
    int tab[rozmiar],i;
    for(i=0;i<rozmiar;i++)
        scanf("%i",&tab[i]);
    zamiana2(tab,rozmiar);
    return 0;
}
void zamiana2(int tab[],int rozmiar)
{
    int i;
    for(i=0;i<rozmiar;i++)
        if(tab[i]%2==0)
            tab[i]=0;
        else
            tab[i]=1;
        for(i=0;i<rozmiar;i++)
            printf("%i",tab[i]);
}
