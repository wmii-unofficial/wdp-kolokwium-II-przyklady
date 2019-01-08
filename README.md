# Przykładowe zadania do drugiego kolokwium z WDP. 

## Jak to skompilować?

Wszystko za jednym zamachem - `make all` pod linuxami/windowsami z mingw powinny ogarnąć, pojedyncze pliki to po prostu warto przekopiować do ulubionego kompilatora i odpalić.

## Sugestie

Mikro-wskazania do współpracy nad tym repozytorium:

1. Chcesz dodać rozwiązanie, ale nie wiesz jak? Dodaj _issue_ i napisz, o co chodzi: [Link do zgłoszeń w repozytorium](https://github.com/wmii-unofficial/wdp-kolokwium-II-przyklady/issues). Pacnij zielony przycisk i napisz, o co chodzi/wrzuć rozwiązania a ktoś doda to pliku. 
2. Jeżeli wiesz jak to pracujmy na pull-requestach. 
3. Dyskusje, pytania, zażalenia: w sumie discord, link jest do znalezienia na grupie pierwszorocznych. 

PS. Warto sprawdzić kategorie "Issues" i "Pull requests" na górze, zapewne coś fajnego tam się dzieje. 

## Lektury dodatkowe
- [Materiał sugerowany przez githuba odnośnie pull requestów](https://help.github.com/articles/about-pull-requests/)
- [Materiał z pewnych zajęć PU](https://github.com/lukzmu/university/tree/master/Programy%20U%C5%BCytkowe/01.%20Github)

## Ostrzeżenie

![Znak ostrzeżenia](https://pixnio.com/free-images/2017/06/08/2017-06-08-15-56-27-831x675.jpg)

Ze względu na _wprowadzający charakter_ kolokwium tzw. _coding style_ jest dość specyficzny - nie wypowiem się odnośnie dopuszczalności używania fajnych funkcji dostępnych w języku C([`strlen()`](https://pl.wikibooks.org/wiki/C/strlen), bądź [`isupper()`](https://pl.wikibooks.org/wiki/C/isalnum), aczkolwiek w przykładach będą rzadko(o ile w ogóle). 

Jedna rzecz która budzi moją osobistą nieakceptację jest przyzwolenie na korzystanie z gets bądź czystego scanfa bez słowa zastrzeżenia na zajęciach o tym, że jest "be" - [ponieważ jest źródłem tzw. buffer overflow](https://stackoverflow.com/questions/1621394/how-to-prevent-scanf-causing-a-buffer-overflow-in-c). 

Fakt, z edukacyjnego punktu widzenia można powiedzmy docenić prostotę tych funkcji, aczkolwiek na zajęciach brakowało jakiejkolwiek informacji na ten temat. 

Więcej materiałów dla zainteresowanych: 
- [Film angielski](https://www.youtube.com/watch?v=1S0aBV-Waeo)
- [Film polski](https://www.youtube.com/watch?v=qf2pRoXNzLI)
- [Hands on, czyli praktyczne wykorzystanie scanfa](https://dhavalkapil.com/blogs/Buffer-Overflow-Exploit/) - materiał z tego linku będzie na przedmiocie za circa rok, także jak najbardziej tekst dla chętnych.
