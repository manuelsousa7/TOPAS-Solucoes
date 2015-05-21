#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <stdio.h>
#include <string>
using namespace std;


int main()
{
	int n,a=0;
	cin >> n;
	for(int i=0;i<100000;i++)
	{
		a+=i;
		if(a==n)
		{cout << "SIM" << endl;break;}
		else
		if(a!=n && a>n)
		{cout << "NAO" << endl;break;}
	}

	return 0;
}
