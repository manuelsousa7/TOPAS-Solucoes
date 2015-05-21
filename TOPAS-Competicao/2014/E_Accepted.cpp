#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define MAXSTR 30
#define limite 50

using namespace std;

int main()
{
    int nn,n,tipo=1;
    char store[limite][MAXSTR],processachar[limite][MAXSTR],respostafinal[limite][limite][MAXSTR],transporta[limite];
    int processaint[limite],guardaposicoes[limite],gp=-1;
    cin >> n;
    for(int i=0;i<n;i++)
    cin >> store[i];
    while(tipo!=0)
    {
        cin >> tipo;
        if(tipo==1)
        {
            cin >> nn;
            gp+=1;
            guardaposicoes[gp]=nn;
            for(int i=0;i<nn;i++)
            cin >> processachar[i];
                    for(int ii=0;ii<nn;ii++)
                    {
                        for(int i=0;i<n;i++)
                        {
                            if(strcmp(processachar[ii],store[i])==0)
                            {
                                sprintf(transporta,"%d",abs((i-n)+n+1));
                                strcpy(respostafinal[gp][ii],transporta);
                            }
                        }
                    }
            }

        if(tipo==2)
        {
            cin >> nn;
            gp+=1;
            guardaposicoes[gp]=nn;
            for(int i=0;i<nn;i++)
            cin >> processaint[i];
            for(int i=0;i<n;i++)
            {
                    for(int ii=0;ii<nn;ii++)
                    {
                        strcpy(respostafinal[gp][ii],store[processaint[ii]-1]);
                    }
            }
        }
        if (tipo==0)
        break;
    }
    for(int i=0;i<gp+1;i++)
    {
        for(int ii=0;ii<guardaposicoes[i];ii++)
            {
                if(ii+1==guardaposicoes[i])
                cout << respostafinal[i][ii] << "\n";
                else
                cout << respostafinal[i][ii] << " ";

            }
    }
    return 0;
}
