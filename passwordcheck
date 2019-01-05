#include <stdio.h>
#include <stdlib.h>
int czyOk1 (char []);
int tylkoMaleLitery (char);
int tylkoDuzeLitery (char);
int tylkoCyfry (char);
int inneZnaki (char);

int main()
{
    char haslo[10];
    printf("wprowadz haslo \n");
    gets(haslo);
    if(czyOk1(haslo))
    {
        printf("ok");
        return 1;
    }
    else
    {
        printf("bad");
        return 0;
    }

}
int czyOk1(char haslo[])
{
      int i=0,mala=0,wielka=0,cyfra=0,znaki=0;
    while(haslo[i]!='\0')i++;
   if(i!=8)return 0;

   i=0;
   while(haslo[i]!='\0')
   {
       if (tylkoMaleLitery(haslo[i]))mala=1;
       if (tylkoDuzeLitery(haslo[i]))wielka=1;
       if (tylkoCyfry(haslo[i]))cyfra=1;
       if (inneZnaki(haslo[i]))znaki=1;
       i++;
   }
   if(mala && wielka && cyfra && znaki)return 1;
   return 0;

}
int tylkoMaleLitery (char znak)
{
    if(znak>='a' && znak<='z')return 1;
    return 0;
}
int tylkoDuzeLitery (char znak)
{
    if(znak>='A' && znak<='Z')return 1;
    return 0;
}
int tylkoCyfry (char znak)
{
     if(znak>='0' && znak<='9')return 1;
    return 0;
}
int inneZnaki (char znak)
{
    if(znak<='0' && znak>='9' && znak<='a' && znak>='z' && znak<='A' && znak>='Z')return 1;
    return 0;
}
