#include <iostream>

using namespace std;

int main()
{
    string a,b;
    int a1,a2,b1,b2,t1,t2;
    cin >> a >> b;
    cin >> a1 >> a2;
    cin >> b1 >> b2;
    t1=a1+b2;
    t2=a2+b1;
    if(t1>t2)
        cout << a << endl;
    else
    if(t1<t2)
        cout << b << endl;
    else
    {
        if(a1>b1)
            cout << b << endl;
        else
        if(a1<b1)
            cout << a << endl;
        else
            cout << "penaltis"  << endl;

    }
    return 0;
}
