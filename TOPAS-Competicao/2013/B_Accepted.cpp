#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
      float n1=0,n2=0;
      int nn1,nn2,numero1,passa=0;
      scanf("%d",&numero1);
      n1=(numero1-9)/3;
      n2=(numero1-9)/5;
      nn1=n1;
      nn2=n2;

      if(nn1%2==0){
         if (numero1==3*nn1+9)
         {printf("%d\n",nn1);
         passa=passa+1;}}

         if(nn2%2!=0 ){
         if (numero1==(5*nn2+9))
         {printf("%d\n",nn2);
         passa=passa+1;}
         }
         if (passa==0)
         printf("Acho que te enganaste nas contas.\n");
         return 0;
}
