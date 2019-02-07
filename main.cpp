#include <iostream>

using namespace std;
void wczytaj(int *T, int n)
{
    for(int i=0; i<n; i++)
    {
        cin >> T[i];
    }
}

void szukajLidera(int *T,int n)
{
    int lider=T[0];
    int pom=1;
    int ilosc=0;
    for(int i=0; i<n; i++)
    {
        if(pom==0)
        {
            lider=T[i];
            pom=1;
        }
        else
        {
            if(T[i]==lider) pom++;
                else pom--;
        }
    }
    if(pom==0) cout << "Nie ma lidera";
        else {
            for(int i=0; i<n; i++)
        {
            if(lider=T[i]) ilosc++;
        }
        if (ilosc > n/2)
            cout << "Lider : " << lider << endl;
            else cout << "Nie ma lidera.";
        }
}

bool czyRosnacy (int *T, int n)
{
    for(int i=0; i<n-1 ; i++)

         if (T[i]>=T[i+1]) return false;
         return true;



}
bool czyMalejacy (int *T, int n)
{
    for(int i=0; i<n-1 ; i++)

        if (T[i]<=T[i+1]) return false;
         return true;



}
bool czyNieRosnacy (int *T, int n)
{
    for(int i=0; i<n-1 ; i++)

        if (T[i]<T[i+1]) return false;
      return true;



}
bool czyNieMalejacy (int *T, int n)
{
    for(int i=0; i<n-1 ; i++)

        if (T[i]>T[i+1]) return false;
        return true;



}
bool czyStaly (int *T, int n)
{
    for(int i=0; i<n-1 ; i++)
        if (T[i]!=T[i+1]) return false;

    return true;
}
int main()
{
    int n;
    cin >> n;
    int T[n];
    wczytaj(T,n);
    szukajLidera(T,n);
    cout << endl << endl;
    if (czyRosnacy(T,n)) cout << "Ciag Rosnacy" << endl;
    if (czyMalejacy(T,n)) cout << "Ciag Malejacy" << endl;
    if (czyNieRosnacy(T,n)) cout << "Ciag Nierosnacy" << endl;
    if (czyNieMalejacy(T,n)) cout << "Ciag Niemalejacy" << endl;
    if (czyStaly(T,n)) cout << "Ciag Staly" << endl;
}
