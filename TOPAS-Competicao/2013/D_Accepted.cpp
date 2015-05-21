#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

int main () {
  int n,el=0,store=0,store2=0,ali=0;
  cin >> n;
  int temperaturas[n-1];
  int asdd[n-1];
  int noob[n-1];
  int noob2[n-1];
  for(int i=0;i<n;i++)
  cin >> temperaturas[i];

  for(int i=0;i<n;i++)
  {
          store=temperaturas[i+1];
          store2=temperaturas[i+2];
          if (temperaturas[i]==store || (temperaturas[i]==store2 && temperaturas[i]==store))
            continue;
          else
          {asdd[el]=temperaturas[i];el=el+1;}

   }
   noob[ali]=asdd[0];
   ali=ali+1;
   for(int i=0;i<el;i++)
   {
        if(i+1==el)
        break;
        if(i!=0)
        {
           if (asdd[i]<asdd[i-1] && asdd[i]< asdd[i+1])
           {noob[ali]=asdd[i];ali=ali+1;}
           if (asdd[i]>asdd[i-1] && asdd[i]>asdd[i+1])
           {noob[ali]=asdd[i];ali=ali+1;}
        }
    }
    noob[ali]=asdd[el-1];
    ali=ali+1;
    for(int i=0;i<ali;i++)
    {
         if (i+1==ali)
         break;
         noob2[i]=abs(noob[i]-noob[i+1]);
    }
    sort(noob2,noob2+ali-1);
    sort(temperaturas,temperaturas+n);
    cout << temperaturas[n-1] << " "<< temperaturas[0] << " " << noob2[ali-2] << " " << noob2[0] << endl;
    return 0;
}
