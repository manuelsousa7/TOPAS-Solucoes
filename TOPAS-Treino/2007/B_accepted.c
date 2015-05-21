#include <stdio.h>
#include <string.h>
main()
{
     int a=0,b=0,conta=0,i=0,var1[10001],var2[10001],var3[10001],processo=0;
     for(;;)
     {
           scanf("%d %d",&a,&b);
           if(a==0 && b==0)
           break;
           else
           {
                 conta=conta+1;
                 n=a/b;
                 if(n*b==a)
                 {
                                 var2[i]=n;
                                 var3[i]=0;
                 }
                 else
                 if(n*b!=a)
                 {
                         processo=a-(n*b);
                         if(processo==n)
                         {
                                        var2[i]=0;
                                        var3[i]=processo;
                         }
                         else
                         if(processo!=n)
                         {
                                        var2[i]=n-processo;
                                        var3[i]=processo;
                         }
                 }
                 i++;
           }

     }
     for(i=0;i<conta;i++)
     printf("%d %d %d\n",n,var2[i],var3[i]);
     return 0;
}
