#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{

      int n,i,soma=0,N;
      scanf("%d %d",&n,&N);
      int v[N];
      for(i=0;i<N;i++)
      scanf("%d",&v[i]);
      sort(v,v+N);
      for(i=0;i<(N/n);i++)
      soma=soma+v[N-i-1];
      printf("%d\n",soma);
      return 0;
}
