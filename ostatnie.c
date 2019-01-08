#include<stdio.h>
#include<stdlib.h>

void ostatnie(char[],int);

int main()
{
    ostatnie("Ala ma kota",5);
    return 0;
}
void ostatnie(char napis[],int n)
{
    int i=0;
    int ostatni=0;
    while(napis[i]!='\0')
    {
        i++;
    }
    ostatni=i-n;
    for(ostatni; ostatni<=i;ostatni++)
    {
        printf("%c",napis[ostatni]);
    }
}
