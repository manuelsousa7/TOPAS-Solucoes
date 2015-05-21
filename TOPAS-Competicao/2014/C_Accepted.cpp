#include <iostream>
#include <math.h>
#include <algorithm>
#include <string.h>
#define MAX 1000
using namespace std;

struct variaveis{
 int x;
 int y;
 char tipo[5];
}vars[MAX];

int main()
{

    int x,y,n,maior=4000000,maiorposicao=0,nuncapassou=0,Xfinal,Yfinal,Hfinal;
    int altura,base,hipotenusa;
    char tipo[5];
    cin >> x >> y >> tipo;
    cin >> n;
    for(int i=0;i<n;i++)
    {cin >> vars[i].x >> vars[i].y >> vars[i].tipo;}
    for(int i=0;i<n;i++)
    {
        if(strcmp(tipo,vars[i].tipo)==0)
        {
            nuncapassou=1;
            altura=abs(vars[i].y-y);
            base=abs(vars[i].x-x);
            hipotenusa=(base*base)+(altura*altura);
            if(hipotenusa<maior)
            {maior=hipotenusa;Xfinal=vars[i].x;Yfinal=vars[i].y;Hfinal=hipotenusa;}
        }
    }
    if(n==0 || nuncapassou==0)
    cout << "Nenhum" << endl;
    else
    cout << Xfinal << " " << Yfinal << " " << tipo << " " << Hfinal << endl;
    return 0;
}
