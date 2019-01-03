#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
void avg(int *tab, int n);
void minim(int *tab, int n);
void maks(int *tab, int n);
void wczytaj(int *tab, int n);
void wypisz(int *tab, int n);
int main()
{

    int n;
    cin >> n;
    int tab[n];
    wczytaj(tab,n);
    wypisz(tab,n);
    cout << endl << endl;
     maks(tab,n);
     cout << endl << endl;
     minim(tab,n);
     cout << endl << endl;
     avg(tab,n);

}
void wczytaj(int *tab, int n)
{
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        tab[i]=rand()%100+1;
    }

}

void wypisz(int *tab, int n)
{
      for(int i=0; i<n; i++)
    {
        cout << tab[i] << " ";
    }
}


void maks(int *tab,int n)
{
    int s=tab[0];
    for(int i=0; i<n; i++)
    {
        if(tab[i]>s) s=tab[i];
    }
    cout << "Maks to :" << s;
}

void minim(int *tab,int n)
{
    int s=tab[0];
    for(int i=0; i<n; i++)
    {
        if(tab[i]<s) s=tab[i];
    }
    cout << "Minimum to : " << s;
}

void avg(int *tab,int n)
{
    double s=0;
    for(int i=0; i<n; i++)
    {
        s+=tab[i];
    }
    cout << "Srednia to : " << s/n;
}
void dominanta(int *tab,int n)
{

    for(int i=0; i<n; i++)
    {

    }
}


