#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int v[23],null;
    float media1=0,media2=0;
    for(int i=0;i<24;i++)
    cin >> null >>v[i];
    media1=trunc((v[21]+v[22]+v[23])/3);
    media2=trunc((v[0]+v[12])/2);
    cout << (media1+ media2)/2 << endl;
    return 0;
}
