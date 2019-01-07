//Funkcja  dzielniki(int liczba).
//Wypisuje wszystkie dzielniki podanej liczby.
#include<stdio.h>
void dzielniki(int);
int main()
{
    int liczba;
    printf("wprowadz liczbe aby uzyskac jej dzielniki ");
    scanf("%i",&liczba);
    dzielniki(liczba);
    return 0;

}
void dzielniki (int liczba)
{
    int i;
    for(i=1;i<=liczba;i++)
        if(liczba%i==0)
            printf("%i \n",i);
}
