#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void zamiana(int[], int);

int main()
{
    int i;
    int rozmiar=10;
    int tab[rozmiar];
    srand(time(NULL));

    for(i=0;i<rozmiar;i++)
    {
        tab[i]=rand()%20;
        printf("%3i",tab[i]);
    }
    printf("\n\n");
    zamiana(tab,rozmiar);
    return 0;
}

void zamiana(int tab[], int rozmiar)
{
    int i;
    for(i=0;i<rozmiar;i++)
    {
        if(tab[i]%2==0)
            tab[i]=0;
        else
            tab[i]=1;
        printf("%3i",tab[i]);
    }
}
