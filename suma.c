#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int suma(int[],int, int);

int main()
{
    int rozmiar=20;
    int tab[rozmiar];
    int liczba;
    int i;
    srand(time(NULL));
    for(i=0;i<rozmiar;i++)
    {
        tab[i]=rand()%50;
        printf("%3i",tab[i]);
    }
    printf("\nPodaj liczbe:\n");
    scanf("%i",&liczba);
    printf("suma elementów tablicy wiekszych od %i wynosi %i",liczba,suma(tab,rozmiar,liczba));
    return 0;
}

int suma(int tab[], int rozmiar, int liczba)
{
    int i;
    int suma=0;
    for(i=0;i<rozmiar;i++)
    {
        if(tab[i]>liczba)
        {
            suma+=tab[i];
        }
    }
    return suma;
}
