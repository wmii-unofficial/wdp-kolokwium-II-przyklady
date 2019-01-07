#include<stdio.h>
#include<stdlib.h>
int czyHaslo(char []);
int czyWielka(char );
int czyCyfra(char );

int main()
{
    char tab[10];
    gets(tab);
    if(czyHaslo(tab))
    {
        printf("ok");
        return 1;
    }
    else
    {
        printf("zle jak....");
    }

    return 0;
}
int czyHaslo(char haslo[])
{
    int i=0,ileZnakow=0;
     while(haslo[i]!='\0')i++;
        ileZnakow=i;
    if (ileZnakow!=9)return 0;
    if(!(czyCyfra(haslo[0])))return 0;
    i=1;
    while(haslo[i]!='\0')
    {
        if(!(czyWielka(haslo[i])))return 0;
        i++;
    }
    return 1;

}
int czyWielka(char znak)
{
    if (znak>='A' && znak<='Z')return 1;
    return 0;
}
int czyCyfra(char znak)
{
    if (znak>='0' && znak<='9')return 1;
    return 0;
}
