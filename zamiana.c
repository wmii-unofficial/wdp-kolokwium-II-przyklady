/*Napisać funkcję  zamiana1(char napis[])
Która zamienia w napisie wszystkie cyfry na znak 'C', litery małe na 'l', wielkie na 'L'
pozostałe znaki zostają bez zmian
np.: zmiana("123-DEK/abc") po funkcji: CCC-LLL/lll*/
#include<stdio.h>
void zamiana1(char []);
int main()
{
    char tab[10];
    gets(tab);
    zamiana1(tab);
    return 0;
}
void zamiana1(char napis[])
{
    int i=0;
    while(napis[i]!='\0')
    {
        if(napis[i]>='0' && napis[i]<='9')
            napis[i]='C';
        else if(napis[i]>='a' && napis[i]<='z')
            napis[i]='l';
        else if(napis[i]>='A' && napis[i]<='Z')
            napis[i]='L';
        i++;
    }
    puts(napis);
}
