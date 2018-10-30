#include <iostream>
#include <cmath>
using namespace std;
void   s            (int a,int b,int c) ;
void   spr          (int a)             ;
int    kwadratSumy  (int a, int b)      ;
void   podzielnosc  (int x)             ;
double pierwiastek  (int z)             ;
int    sumaCyfr     (int a)             ;
void   dzielnik     (int x, int d)      ;
int    pierwsza     (int n)             ;
int    druga        (int a)             ;
double trzecia      (int b)             ;


int main()
{
    int a,b,c,d,x,y                         ;
    cout << "Karta Pracy\n"                 ;
    cout << "Wybierz zadanie od 1 do 4\n"   ;
              cin >> y                      ;
    switch(y)
    {
    case 1:

    cout << "Zadanie 1\n\n"                                                               ;
    cout << "Wybierz funkcje od 1 do 5:\n"                                                ;
    cout << "1-Sprawdz czy trzecia podana liczba miesci sie miedzy pierwsza, a druga.\n"  ;
    cout << "2-Sprawdz czy podana liczba jest czterocyfrowa i podzielna przez 13.\n"      ;
    cout << "3-Oblicz kwadrat sumy dwoch podanych liczb.\n"                               ;
    cout << "4-Sprawdz czy podana liczba jest podzielna przez 3.\n"                       ;
    cout << "5-Oblicz pierwiastek z podanej liczby.\n"                                    ;
               cin >> x             ;
    switch(x)
            {
    case 1 :   cin >> a >> b >> c   ;          s(a,b,c)         ;                    break ;
    case 2 :   cin >> a             ;          spr(a)           ;                    break ;
    case 3 :   cin >> a >> b        ;  cout << kwadratSumy(a,b) ;                    break ;
    case 4 :   cin >> a             ;          podzielnosc(a)   ;                    break ;
    case 5 :   cin >> a             ;  cout << pierwiastek(a)   ;                    break ;
            }
    break                                                                                 ;


    case 2:
    cout << "Sprawdz czy druga podana liczba jest dzielnikiem pierwszej.\n" ;
               cin >> a >> b                                                ;
            dzielnik(a,b)                                                   ;
    break                                                                   ;

    case 3 :
    cout << "Obliczanie sumy cyfr podanej liczby.\n"  ;
               cin >> a                               ;
    cout << sumaCyfr(a)                               ;
    break ;

    case 4 :
               cout << "Zadanie 4.\n"           ;
    cin >> a                                    ;
    if(a%2==0) cout << druga(pierwsza(a))       ;
        else   cout << trzecia(a)               ;
    break                                       ;


    }
}
//____________________________________________________________________________________________________________________________________________________________________
//////////Fukcje do zadania 1
void s(int a,int b,int c)
{
    if(c>b && c<a || c<b && c>a) cout << "Trzecia podana liczba miesci sie miedzy pierwsza, a druga";
        else cout << "Trzecia podana liczba nie miesci sie miedzy pierwsza, a druga";
}

void spr(int a)
{
    if(a>999 && a<10000 && a%13==0) cout << "Twoja liczba jest czterocyfrowa i dzieli sie przez 13";
        else cout << "Twoja liczba nie jest czterocyfrowa i/lub nie dzieli sie przez 13";
}

int kwadratSumy(int a,int b)
{
    return (a+b)*(a+b);
}

void podzielnosc(int x)
{
    if(x%3==0) cout << "Podana liczba dzieli sie przez 3";
        else cout << "Podana liczba nie dzieli sie przez 3";
}

double pierwiastek(int a)
{
    return sqrt(a);
}
//////////////////////////////////////////////
////////////Funkcja do zadania 2
void dzielnik(int x, int d)
{
    if(x%d==0) cout << "Tak, jest.";
        else cout << "Nie, nie jest.";
}
////////////////////////////////////////////
/////////Funkcja do zadania 3
int sumaCyfr(int a)
{
        int     suma=0;
        do     {
                suma=suma+a%10;
                a=a/10;
               }
        while   (a!=0);
        return  suma;
}
////////////////////////////////////////////
///////Funkcje do zadania 4
int pierwsza(int n)
{

if(n%2==0) return n;

}

int druga(int a)
{
    return 3*a;
}

double trzecia(int b)
{
    return b*0.4;
}
////////////////////////////////////////////////
