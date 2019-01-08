#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int suma(int[],int);

int main()
{
    int rozmiar=20;
    int tab[rozmiar];
    int i;
    for(i=0;i<rozmiar;i++)
    {
        tab[i]=rand()%50;
        printf("%3i",tab[i]);
    }
    printf("\nSuma najwiêkszego elementu i najmniejszego wynosi %i",suma(tab,rozmiar));
    return 0;
}

int suma(int tab[], int rozmiar)
{
    int min=51;
    int max=0;
    int suma=0;
    int i;
    for(i=0;i<rozmiar;i++)
    {
        if(tab[i]<min)
            min=tab[i];
        if(tab[i]>max)
            max=tab[i];
    }
    suma=min+max;
    return suma;
}
