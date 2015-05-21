#include <iostream>

using namespace std;

int main()
{
    int a,b,j;
    cin >> a >> b >> j;
    if(b+3*j<=a)
    cout << ":-D" << endl;
    else
    if(b+3*j>a && a>b)
    cout << ":-)" << endl;
    else
    if(a+3*j>b && a<b)
    cout << ":-|" << endl;
    else
    cout << ":-(" << endl;
    return 0;
}
