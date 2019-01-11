#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void losuj(int[], int);
void wypisz(int[], int);
int sumaParz(int[], int);
int roznica(int[], int);
int ile(int[], int);



#define ROZMIAR 5

int main()
{
	srand(time(0));


	int tab[ROZMIAR] = { 0 };
	int test_tab[] = { 3,5,7,2,5,3,8,3 };

	wypisz(tab, ROZMIAR);
	losuj(tab, ROZMIAR);
	wypisz(tab, ROZMIAR);
	printf("Suma parzystych elementow tablicy to: %d", sumaParz(tab, ROZMIAR));
	printf("Roznica pomiedzy max a min: %d\n", roznica(tab, ROZMIAR));
	printf("Liczba powtorzen w tablicy losowej: %d\n", ile(tab, ROZMIAR));
	printf("Liczba powtorzen dla przypadku testowego: %d\n", ile(test_tab,8));
	getchar();
	return 0;
}



void losuj(int tab[], int rozmiar)
{
	printf("Zwalniam blokade maszyny losujacej...\n");
	for (int i = 0; i < rozmiar; i++)
		tab[i] = rand() % 11;
}

void wypisz(int tab[], int rozmiar)
{
	printf("Wypisuje zawartosc tablicy: \n");
	for (int i = 0; i < rozmiar; i++)
		printf("%d\t", tab[i]);
	puts("");
}

int sumaParz(int tab[], int rozmiar)
{
	int suma = 0;
	for (int i = 0; i < rozmiar; i++)
		if (tab[i] % 2 == 0) suma += tab[i];
	return suma;
}

int roznica(int tablica[], int rozmiar)
{
	int min = 10, max = 0;
	for (int i = 0; i < rozmiar; i++)
	{
		if (tablica[i] > max) max = tablica[i];
		if (tablica[i] < min) min = tablica[i];
	}
	printf("Najwieksza liczba w tablicy: %d, najmniejsza:%d\n", max, min);
	return max - min;
}

int ile(int tab[], int rozmiar)
{
	int powtorzenia[10] = { 0 }, licznik = 0;
	for (int i = 0; i < rozmiar; i++)
	{
		powtorzenia[tab[i]]++;
	}

	for (int i = 0; i < 10; i++)
	{
		if (powtorzenia[i] > 1) licznik++;
	}
	return licznik;
}