//funkcja int ileCyfr(char napis[])
//zwraca w wyniku liczbę cyfr w napisie.

#include<stdio.h>
int ileCyfr(char []);
int main()
{
    char napis[40];
    gets(napis);
    printf("%i",ileCyfr(napis));
    return 0;
}
int ileCyfr(char napis[])
{
    int i=0,ile=0;
    while(napis[i]!='\0')
    {
     if(napis[i]>='0' && napis[i]<='9')ile++;
     i++;
    }
    return ile;
}
