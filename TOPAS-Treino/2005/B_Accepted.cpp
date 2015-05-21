#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define vermelho "vermelho"
#define verde "verde"
#define laranja "laranja"
#define lli long long int

using namespace std;


int main()
{
      int n1=0,mat[3];
      cin >> n1;
      mat[0]=n1%3;
      mat[1]=(n1/3)%3;
      mat[2]=((n1/3)/3)%3;
      mat[3]=(((n1/3)/3)/3)%3;
      for (int i=0;i<=3;i++)
      {
         if(mat[i]==0)
          {cout << (verde);
          cout << endl;}
          if(mat[i]==1)
          {cout << (laranja);
          cout << endl;}
          if(mat[i]==2)
          {cout << (vermelho);
          cout << endl;}
      }
      return 0;
}
