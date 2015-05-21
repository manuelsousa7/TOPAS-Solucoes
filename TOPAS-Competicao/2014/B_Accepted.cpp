#include <iostream>
using namespace std;
int main()
{
    int n,conta=0;
    cin >> n;
    int n1[n];
    for(int i=0;i<n;i++)
    cin >> n1[i];
    for(int i=1;i<n;i++)
    {

        if(i+1==n)
        break;
        if(n1[i]>n1[i-1]*2 && n1[i]>n1[i+1]*2)
        conta+=1;
    }
    cout << conta << endl;
    return 0;
}
