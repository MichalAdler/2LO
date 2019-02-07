#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void wczytaj( int *T,int n);
void wypisz(int *T,int n);
void sortuj(int *T,int n);
int main()
{
    int n;
    cin >> n;
    int T[n];
    wczytaj(T,n);
    wypisz(T,n);
    sortuj(T,n);

}

void wczytaj(int *T,int n)
{
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        T[i]= rand()%10000 + 1;
    }
}

void wypisz(int *T,int n)
{
    for(int i=0; i<n; i++)
    {
        cout << T[i] << " " ;
    }
}

void sortuj(int *T,int n)
{
   for(int j=n-1; j>0; j--)
   {
        for(int i=0; i<j; i++)
        {
        if(T[i]>T[i+1])
            swap(T[i],T[i+1]);
        }
   }


}
