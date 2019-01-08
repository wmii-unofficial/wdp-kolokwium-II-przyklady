#include<stdio.h>
#include<stdlib.h>

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
        if(napis[i]>='0'&&napis[i]<='9')
            napis[i]='C';
        else if(napis[i]>='A'&&napis[i]<='Z')
            napis[i]='L';
        else if(napis[i]>='a'&&napis[i]<='z')
            napis[i]='l';
        i++;
    }
    printf("%s",napis);
}
