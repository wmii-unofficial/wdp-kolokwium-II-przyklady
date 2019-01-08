#include<stdio.h>
#include<stdlib.h>

void szyfr(char[]);

int main()
{
    szyfr("Zosia");
}

void szyfr(char napis[])
{
    int i=0;

    while(napis[i]!='\0')
    {
        if((napis[i]>='a'&&napis[i]<'z')||(napis[i]>='A'&&napis[i]<'Z'))
            printf("%c",napis[i]+1);
        if(napis[i]=='z')
        {
            napis[i]='a';
            printf("%c",napis[i]-25);
        }
        if(napis[i]=='Z')
        {
            printf("%c",napis[i]-25);
        }
        i++;
    }
}
