#include <stdio.h>
#include <string.h>

main()
{
     int k,n1,n2,n3,i;
     char resultados[100][100];
     scanf("%d",&k);
     for(i=0;i<k;i++)
     {
            scanf("%d %d %d",&n1,&n2,&n3);
              
            if (n1 > 0 && n2 > 0 && n3 > 0 && n1 < n2+n3 && n2 <n1+n3 && n3 < n1+n2) 
            if (n1 == n2 && n2 == n3) 
	        strcpy(resultados[i],"Sim, equilatero.");
            else 
	        strcpy(resultados[i],"Sim.");
            else 
            strcpy(resultados[i],"Claro que nao!");
     }
     for(i=0;i<k;i++)
     {
           printf("%s\n",&resultados[i]);
     }
     return 0;
}
