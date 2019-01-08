#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int suma(int[],int);

int main()
{
    int rozmiar=20;
    int tab[rozmiar];
    int liczba;
    int i;
    srand(time(NULL));
    for(i=0;i<rozmiar;i++)
    {
        tab[i]=rand()%20;
        printf("%3i",tab[i]);
    }
    printf("\nroznica najwiekszego i najmniejszego elementu tablicy wynosi %i",suma(tab,rozmiar));
    return 0;
}

int suma(int tab[], int rozmiar)
{
    int i;
    int min=51;
    int max=0;
    int suma=0;
    for(i=0;i<rozmiar;i++)
    {
        if(tab[i]>max)
        {
            max=tab[i];
        }
        if(tab[i]<min)
        {
            min=tab[i];
        }
    }
    suma=max-min;
    return suma;
}
