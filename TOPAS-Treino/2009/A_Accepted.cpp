#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define lli long long int

using namespace std;


int main()
{
    int a,b,n,c1,c2,r;
    cin >> c1 >> c2;
    cin >> r;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b;

        if(((c1-a)*(c1-a)+(c2-b)*(c2-b))>(r*r))
            cout << "(" << a <<"," << b <<"): no exterior" << endl;
        else
        if(((c1-a)*(c1-a)+(c2-b)*(c2-b))<(r*r))
            cout << "(" << a <<"," << b << "): no interior" << endl;
        else
            cout << "(" << a << "," << b << "): na fronteira" << endl;

    }
    return 0;
}
