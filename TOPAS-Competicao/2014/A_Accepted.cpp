#include <iostream>
using namespace std;
int main()
{
    int ano,mes,dia,A=0,B=0,C=0,D=0,E=0,DJ=0;
    cin >> ano >> mes >> dia;
    if(mes<3)
    {ano-=1;mes+=12;}
    A=ano/100;
    B=A/4;
    if(ano>1582)
    C=2-A+B;
    if(ano<=1582)
    if(mes<=10)
    if(dia<=15)
    C=0;
    else
    C=2-A+B;
    D=365.25*(ano + 4716);
    E=30.6001*(mes + 1);
    DJ= D + E + dia + C - 1524;
    cout << DJ << endl;
    return 0;
}
