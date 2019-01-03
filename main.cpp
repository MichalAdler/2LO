#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ifstream iksde("cyfry.txt");
   int c,a=0;
   while(!iksde.eof())
   {
        iksde>>c;
        if(c==7) a++;

   }
   cout<<a<<endl;
   iksde.close();

   ifstream liczby("liczby.txt");
    int l;
    liczby >> l;
    int maxim=l;

    while(!liczby.eof())
    {
    liczby >> l;
    if(l>=maxim) maxim=l;
    }
    cout << maxim << endl;
}
