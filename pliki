#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;
void randzik(int *tab,int n);
void podzielnosc(int *tab,int n);
void domina(int *tab, int n);
int main()
{
    int n;
    cin >> n;
    int tab[n];
    randzik(tab,n);
    podzielnosc(tab,n);
    cout << endl << endl;
    cout << "Sprawdz pliczek mordo";

}

void randzik(int *tab, int n)
{
    ofstream baza("baza.txt");
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {

            tab[i]=rand()%9000+1000;
            baza << tab[i] << endl;

    }
    baza.close();
}

void podzielnosc(int *tab,int n)
{
    ofstream wynik1("wynik1.txt");
    for(int i=0; i<n; i++)
    {
        if(tab[i]%323==0)
            wynik1 << tab[i] << endl;
    }
    wynik1.close();
}
void domina(int *tab, int n)
{

}





















