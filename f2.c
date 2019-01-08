#include<stdio.h>
#include<stdlib.h>

void f1(char[]);

int main()
{
    char napis[]="zaq123.,sx";
    f1(napis);
    return 0;
}

void f1(char napis[])
{
    int i=0;
    while(napis[i]!='\0')
    {
        if(!((napis[i]>='a'&&napis[i]<='z')||(napis[i]>='A'&&napis[i]<='Z')))
            napis[i]='_';
        i++;
    }
    printf("%s",napis);
}
