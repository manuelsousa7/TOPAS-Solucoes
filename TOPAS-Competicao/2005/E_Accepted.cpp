#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
	int n,a=0,aa=0;
	string g[50][50];
	g[0][1]="+";
	g[1][1]="_";
	g[2][1]="A";
	g[2][2]="B";
	g[2][3]="C";
	g[3][1]="D";
	g[3][2]="E";
	g[3][3]="F";
	g[4][1]="G";
	g[4][2]="H";
	g[4][3]="I";
	g[5][1]="J";
	g[5][2]="K";
	g[5][3]="L";
	g[6][1]="M";
	g[6][2]="N";
	g[6][3]="O";
	g[7][1]="P";
	g[7][2]="Q";
	g[7][3]="R";
	g[7][4]="S";
	g[8][1]="T";
	g[8][2]="U";
	g[8][3]="V";
	g[9][1]="W";
	g[9][2]="X";
	g[9][3]="Y";
	g[9][4]="Z";
	cin >> n;
	a=n;aa++;
	for(;n!=99;)
	{
		cin >> n;		
		if(n==77)
		{	
			cout << g[a][aa];
			aa=77;
			a=77;
		}
		else
		if(a==77)
		{a=n;aa=1;}
		else
		if(n!=a)
		{
			cout << g[a][aa];
			aa=1;
			a=n;
		}
		else
		aa++;
	}
	cout << endl;
	return 0;
}
