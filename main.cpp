#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, GCF;
    cout << "Enter the first number" << endl;
    cin >> a;
    cout << "Enter the second number" << endl;
    cin >> b;

    c = a;
    d = b;


    while(d !=0)
    {
        e = d;
        d = c % d;
        c = e;

    }
    GCF = c;
    cout << c;


    return 0;
}
