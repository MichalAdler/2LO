#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x,a,b,c,brutto;
    cout << "Podaj x=1-7";
    cin >> x;
    switch(x)
    {
        case    1: cin >> a >> b;      cout << (a*a)+(b*b) <<            endl; break;
        case    2: cin >> a >> b;      cout << (a*b)+(a*b) <<            endl; break;
        case    3: cin >> a >> b;      cout << pow(a-b,3) <<             endl; break;
        case    4: cin >> a >> b >> c; cout << a*b*c <<                  endl; break;
        case    5: cin >> a >> b;      cout << 2*(a+b)/5 << (a+b)*0.4 << endl; break;
        case    6: cin >> brutto;      cout << brutto/1.23 <<            endl; break;
        case    7: cin >> a >> b;      cout << a%b <<                    endl; break;
        default :                      cout << "Error";
    }

    return 0;
}
