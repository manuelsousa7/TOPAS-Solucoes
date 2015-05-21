#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define a1 "intervalo de primeira"
#define a2 "intervalo de segunda"
#define a3 "intervalo de terceira"
#define a4 "intervalo de quarta"
#define a5 "intervalo de quinta"
#define a6 "intervalo de sexta"
#define a7 "intervalo de setima"
using namespace std;

int main()
{
	int a,b,c=0;
	cin >> a;
	cin >> b;
	if(a<b)
	c=b-a+1;
	else
	c=7-a+b+1;
	if(c==1)cout << a1 << endl;else
	if(c==2)cout << a2 << endl;else
	if(c==3)cout << a3 << endl;else
	if(c==4)cout << a4 << endl;else
	if(c==5)cout << a5 << endl;else
	if(c==6)cout << a6 << endl;else
	if(c==7)cout << a7 << endl;
	return 0;
}
