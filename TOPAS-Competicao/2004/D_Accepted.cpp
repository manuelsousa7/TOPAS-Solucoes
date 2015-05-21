#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
	int n,a,C=0,CC=0,max=0,max2=0;
	cin >> n;
	cin >> a;
	C=a;CC++;
	for(int i=1;i<n;i++)
	{
		cin >> a;
		if(a==C)
		CC++;
		else
		{
			if(CC>max)
			{max=CC;max2=C;}
			CC=1;
			C=a;
		}
	}
	if(CC>max)
	{max=CC;max2=C;}

	cout << max2 << " " << max << endl;
	return 0;
}
