#include <iostream>

using namespace std;

int main()
{
    int ano;
    cin >> ano;
    for(int dia=1;dia<=31;dia++)
    {
        if( (ano + ano/4 - ano/100 + ano/400 + dia) % 7==5)
        {
            if(dia<6)
                cout << dia+7 << endl;
            else
                cout << dia << endl;
            break;

        }
    }
    return 0;
}
