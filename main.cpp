#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void wczytaj(long int *T,int n);
void wypisz(long int *T,int n);
void sortujBabelka(long int *T,int n);
void sortujWybor(long int *T, int n);
void sortZliczanie(long int *T, int n);
int const M=100;
int main()
{
    int n;
    cin >> n;
    long int T[n];
    wczytaj(T,n);
    wypisz(T,n);
    //sortujBabelka(T,n);
    //sortujWybor(T,n);
    sortZliczanie(T,n);
    cout << endl << endl;
    cout << endl << endl;
    wypisz(T, n);

}

void wczytaj(long int *T,int n)
{
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        T[i]= rand()%M + 1;
    }
}

void wypisz(long int *T,int n)
{
    for(int i=0; i<n; i++)
    {
        cout << T[i] << " " <<endl;
    }
}

void sortujBabelka(long int *T,int n)
{
    int i;
   for(int j=n-1; j>0; j--)
   {
        for(int i=0; i<j; i++)
        {
        if(T[i]>T[i+1]);
        swap(T[i],T[i+1]);
        }

   }


}

void sortujWybor(long int *T,int n)
{
    int k;
   for(int i=0; i<n; i++)
   {
       k=i;
        for(int j=i+1; j<n; j++)
        {
            if(T[j]<T[k]) k=j;

        }
            swap(T[i],T[k]);
   }

}

void sortZliczanie(long int *T,int n)
{
    int k=0;
    int P[M+1]={0};
    for(int i=0; i<n; i++)
        P[T[i]]++;

    for(int i=0; i<M+1; i++)
    {
            for(int j=P[i]; j>0; j--)
            {
                T[k]=i;
                k++;
            }
    }

}

