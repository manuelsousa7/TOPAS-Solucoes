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
    int a , b;
    cin >> a >> b;
    if(b%a==0)
        cout << "Sou multiplo de " << a << endl;
    else
        cout << "Nao sou multiplo de " << a << endl;
    return 0;
}
