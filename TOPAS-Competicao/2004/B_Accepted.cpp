#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
	float P , A,imc=0;
	cin >> P >> A;
	P/=1000;
	A/=1000;
	imc=(P/(A*A));
	if(imc<18.5)
	cout << "baixo peso" << endl;
	else
	if(imc>=18.5 && imc<25)
	cout << "normal" << endl;
	else
	if(imc>=25 && imc<30)
	cout << "pré obesidade" << endl;
	else
	if(imc>=30 && imc<35)
	cout << "obesidade de grau I" << endl;
	else
	if(imc>=35 && imc<40)
	cout << "obesidade de grau II" << endl;
	else
	cout << "obesidade de grau III" << endl;
	return 0;
}
