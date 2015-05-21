#include <iostream>
#include <algorithm>
using namespace std;

struct topas{
	int n;
	int nprobs;
	int tempo;
}tt[10000];


void precalc(int N)
{
	for(int i=0;i<N;i++)
	{
		tt[i].n=i+1;
		tt[i].nprobs=0;
		tt[i].tempo=0;
	}
}

bool compara (const topas &a, const topas &b)
{
	if(a.nprobs==b.nprobs)
	return a.tempo < b.tempo;
	else
	return a.nprobs > b.nprobs;
}

int main()
{
	int N,P,T,R,a,b,c;
	cin >> N >> P >> T >> R;
	precalc(N);
	for(int i=0;i<R;i++)
	{
		cin >> a >> b >> c;
		tt[a-1].tempo+=c;
		tt[a-1].nprobs++;
	}
	sort(tt,tt+N,compara);
	cout << tt[0].n << " " << tt[0].nprobs << " " << tt[0].tempo << endl;
	cout << tt[1].n << " " << tt[1].nprobs << " " << tt[1].tempo << endl;
	cout << tt[2].n << " " << tt[2].nprobs << " " << tt[2].tempo << endl;
	return 0;
}
