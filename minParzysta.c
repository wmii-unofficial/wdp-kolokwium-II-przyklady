#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int suma(int[],int);

int main()
{
    int rozmiar=20;
    int tab[rozmiar];
    int i;
    srand(time(NULL));
    for(i=0;i<rozmiar;i++)
    {
        tab[i]=rand()%50;
        printf("%3i",tab[i]);
    }
    printf("\n najmniejszy parzysty element wynosi %i",suma(tab,rozmiar));
    return 0;
}

int suma(int tab[], int rozmiar)
{
    int min=51;
    int i;
    for(i=0;i<rozmiar;i++)
    {
        if(tab[i]<min)
        {
            if(tab[i]%2==0)
                min=tab[i];
        }
    }
    return min;
}
