#include <stdio.h>
#include <string.h>
#include <iostream>
 
using namespace std;
 
int main()
{
        char *numeros[][7] = { {" - ", "| |", "   ", "| |", " - "},{"   ", "  |", "   ", "  |", "   "},{" - ", "  |", " - ", "|  ", " - "},{" - ", "  |", " - ", "  |", " - "},{"   ", "| |", " - ", "  |", "   "},{" - ", "|  ", " - ", "  |", " - "},{" - ", "|  ", " - ", "| |", " - "},{" - ", "  |", "   ", "  |", "   "},{" - ", "| |", " - ", "| |", " - "},{" - ", "| |", " - ", "  |", " - "},{"", "", ":", "", ""},{0, 0} };
 
 
        char string[10];
        int imprimir[15],ii,i;
        cin >> string;
		imprimir[0]=string[0]-'0';
		imprimir[1]=string[1]-'0';
		imprimir[2]=string[3]-'0';
		imprimir[3]=string[4]-'0';
 


                for(i=0;i<5;i++)
        	{
                    for(ii=0;ii<4;ii++)
                    if(ii==0 || ii==2)
                    printf("%s ",numeros[imprimir[ii]][i]);
                    else
                    if(ii==2)
                    if(ii==2)
                    printf("%s :",numeros[imprimir[ii]][i]);
                    else
                    printf("%s ",numeros[imprimir[ii]][i]);
                    else
                    printf("%s",numeros[imprimir[ii]][i]);
                    printf("\n");
 
        	}

 
        
        return 0;
}
