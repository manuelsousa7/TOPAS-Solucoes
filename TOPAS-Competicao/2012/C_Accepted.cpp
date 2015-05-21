#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int N,NN=0,a[100];
    int  media=0;
    cin >> N;
    NN=N;
    for(int i=0;i<N;i++)
    {cin >> a[i];media+=a[i];}
    sort(a,a+N);
    if(a[0]!=a[1])
    {
        media-=a[0];
        NN--;
    }
    if(a[N-1]!=a[N-2])
    {
        media-=a[N-1];
        NN--;
    }
    cout << media/NN << endl;
    return 0;
}
