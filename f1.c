#include <stdio.h>
int f1(char []);
int main()
{
  char napis[100];
  puts("Napisz cos");
  gets(napis);
  printf("\nJest %i znakow po usunieciu duplikatow",f1(napis));
}

int f1(char napis[]){
    char b[100]={1};
    int count = 0, c, d,dlugosc=0,ileroznych=0;
    while(napis[dlugosc]!='\0'){
        dlugosc++;
    }
  for (c = 0; c < dlugosc; c++)
  {
    for (d = 0; d < count; d++)
    {
      if(napis[c] == b[d])
        break;
    }
    if (d == count)
    {
      b[count] = napis[c];
      count++;
    }
  }

  printf("Napis po zamianie\n");
    while(b[ileroznych]!='\0'){
        ileroznych++;
    }
    printf("%s",b);
  return ileroznych;
}
