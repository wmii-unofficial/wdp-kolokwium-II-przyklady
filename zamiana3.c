#include<stdio.h>
#include<stdlib.h>

void zamiana(char[],char,char);

int main()
{
    char napis[]="Ala ma kota";
    char znak1='a';
    char znak2='A';
    printf("%s\n",napis);
    zamiana(napis,znak1,znak2);
}

void zamiana(char napis[],char znak1, char znak2)
{
    int i=0;
    while(napis[i]!='\0')
    {
        if(napis[i]==znak1)
            napis[i]=znak2;
        i++;
    }
    printf("%s",napis);
}
