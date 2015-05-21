#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 18

using namespace std;

struct linha{
	int a;
	int c;
}l[MAX];


void precalc()
{
	for(int i=8;i<=MAX;i++)
	{l[i].a=i;l[i].c=0;}
}

void v(int a,int b)
{
	for(int i=a;i<=b;i++)
	{
		l[i].c++;
	}
}

int main()
{
	int n,a,b,cc=0,cn=0;
	float c=0,cf=0;
	cin >> n;
	precalc();
	for(int i=0;i<n;i++)
	{
		cin >> a >> b;
		v(a,b);
	}
	for(int i=8;i<=18;i++)
	if(l[i].c==n)
	{
		c+=l[i].a;cc++;
	}
	else
	if(c==0 && i==18)
	{cout << "impossivel" << endl;}
	if(cc!=0)
	{
		cf=c/cc;
		cn=c/cc;
		if(cf-cn==0)
		cout << cn << endl;
		else
		cout << cn << " e meia" << endl;
	}
	return 0;
}
