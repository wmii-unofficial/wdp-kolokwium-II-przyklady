#include <stdio.h>

int czyPin(char[]);
void sprawdzPin(char[]);


int main()
{
	
	sprawdzPin("asdf");
	getchar();
}

void sprawdzPin(char kod[])
{
	if (czyPin(kod))
		printf("Pin %s jest prawidlowy!\n", kod);
	else
		printf("Pin %s nie jest poprawny. :-(", kod);
}

int dlugosc(char string[])
{
	int i;
	for (i = 0; string[i] != 0; i++)
		;
	return i;
}

int czyCyfra(char c)
{
	if (c >= '0' &&  c <= '9')
		return 1;
	return 0;
}

int czyPin(char kod[])
{
	int i = 0;
	int powtorzenia[10] = { 0 };

	if (dlugosc(kod) != 4) return 0;
	while (kod[i] != 0)
	{
		if (!czyCyfra(kod[i])) return 0;
		i++;
	}

	i = 0;
	while (kod[i] != 0)
	{
		if (czyCyfra(kod[i]) == 0) return 0;
		i++;
	}

	i = 0;
	while (kod[i] != 0)
	{
		if (powtorzenia[kod[i] - '0'] == 1) return 0;
		powtorzenia[kod[i] - '0']++;
		i++;
	}

	return 1;
	

}


