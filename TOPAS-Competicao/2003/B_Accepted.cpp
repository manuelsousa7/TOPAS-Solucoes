#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <stdio.h>
#include <string>
using namespace std;


int main()
{
	char a[1002],b;
	int c=0;
	cin >> a;
	b=a[0];c++;
	for(int i=1;i<strlen(a);i++)
	{
		if(a[i]!=b)
		{
			if(c>2)
			cout << c << b;
			else
			if(c==2)
			cout << b << b;
			else
			cout << b;
			
			b=a[i];
			c=1;
		}
		else
		{
			c++;
		}
		
	}
	if(c==1)
	cout << b;
	else
	{
		if(c>2)
			cout << c << b;
			else
			if(c==2)
			cout << b << b;
			else
			cout << b;
	}
	cout << endl;
	return 0;
}
