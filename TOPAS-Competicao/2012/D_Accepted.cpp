#include <iostream>
#include <string.h>

using namespace std;

void imprime(char a,int n)
{
    for(int i=0;i<n;i++)
        cout << a;
}

int main()
{
	string s;
	char a;
	int c=1;
	cin >> s;
	a=s[0];
	for(int i=1;(unsigned)i<s.length();i++)
    {
        if(s[i]!=a)
        {
            while(c!=0)
            {
                if(c<3)
                {
                    imprime(a,c);
                    c=0;
                }
                else
                if(c>=3 && c<=12)
                {
                    imprime(a,3);
                    cout << c-3;
                    c=0;
                }
                else
                {
                   imprime(a,3);
                   cout << "9";
                   c-=12;
                }

            }
            a=s[i];
            c=1;
            if((unsigned)i+1==s.length())
            {cout << a;break;}
        }
        else
        if((unsigned)i+1==s.length())
        {
            c++;
                while(c!=0)
                {
                    if(c<3)
                    {
                        imprime(a,c);
                        c=0;
                    }
                    else
                    if(c>=3 && c<=12)
                    {
                        imprime(a,3);
                        cout << c-3;
                        c=0;
                    }
                    else
                    {
                        imprime(a,3);
                        cout << "9";
                        c-=12;
                    }

            }
        }
        else
        c++;
    }
    cout << endl;
    return 0;
}
