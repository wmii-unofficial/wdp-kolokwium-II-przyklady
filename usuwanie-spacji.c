#include <stdio.h>
#include <stdlib.h>

void usun(char napis[]){
    int i=0, j=0;
    while(napis[i]!=0){
        i++;
    }
    while(j < i){
        if(napis[j]==' ' && (napis[j+1]==' ' || napis[j-1]==' ')){
            for(int s = j; s<i; s++) napis[s]=napis[s+1];
            i--;
        }
        else j++;
    }
    printf("%s",napis);
}


int main()
{
char napis[40];
gets(napis);
usun(napis);
}
