#include<stdlib.h>
#include<stdio.h>

void zamiana(char[]);

int main()
{
    char napis[20];
    printf("Podaj napis\n");
    gets(napis);
    zamiana(napis);
}

void zamiana(char napis[])
{
    int i=0;
    while(napis[i]!='\0')
    {
        if(napis[i]==' ')
        {
            napis[i]='_';
        }
    i++;
    }
    printf("%s",napis);
}
