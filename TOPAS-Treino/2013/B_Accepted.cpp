#include <iostream>
#include <string.h>
#define MAX 1000
using namespace std;

int main()
{
    int n;
    cin >> n;
    char strings[n][MAX];
    for(int i=0;i<n;i++)
    cin >> strings[i];
    for(int i=0;i<n;i++)
    {
        for(int ii=0;ii<strings[i][1]-'0';ii++)
        {
            cout << strings[i][0];
        }
        cout << endl;
    }
    return 0;
}
