#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x ,a , b ;
    cout << "Kalkulator \nx=1-dodawanie\nx=2-odejmowanie\nx=3-mnozenie\nx=4-dzielenie\nx=5-pierwiastkowanie\nx=6-potegowanie \nPodaj x";
    cin  >> x                                                                                                                          ;

      switch(x)
{


       case   1:  cin >> a >> b; cout << a+b;      break;
       case   2:  cin >> a >> b; cout << a-b;      break;
       case   3:  cin >> a >> b; cout << a*b;      break;
       case   4:  cin >> a >> b; cout << a/b;      break;
       case   5:  cin >> a;      cout << sqrt(a);  break;
       case   6:  cin >> a >> b; cout << pow(a,b); break;
       default :  cout << "Error";

}

    return 0;
}
