#include<stdio.h>
#include<stdlib.h>

int ileCyfr(char[]);

int main()
{
    char napis[20];
    printf("Podaj napis\n");
    gets(napis);
    printf("W napisie wystepuje %i liczb",ileCyfr(napis));
    return 0;
}
int ileCyfr(char napis[])
{
    int ile=0;
    int i=0;
    while(napis[i]!='\0')
    {
        if(napis[i]>='0'&&napis[i]<='9')
            ile++;
        i++;
    }
    return ile;
}
