#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
      int r=0,g=0,b=0,largura,comprimento,i,ii,k=0,v;
      scanf("%d %d",&comprimento,&largura);
      if(largura!=0 && comprimento!=0)
      for (i=1;i<=comprimento;i++)
      {
          k=k+1;
          if(k<=largura)
          {


          if(i%3==0)
                    b=b+k;
          else
          if(i%2==0)
                    g=g+k;
          else
                    r=r+k;}
          if(k>largura)
                       {if(i%3==0)
                                 b=b+largura;
                       else
                       if(i%2==0)
                                 g=g+largura;
                       else
                                 r=r+largura;}
          v=0;
          for (ii=k+1;ii<=largura;ii++)
          {

              if(i%3==0)
              {
                    v=v+1;
                    if(v==1)
                            r=r+1;
                    else
                    if(v==2)
                            g=g+1;
                    else
                    if(v==3)
                    {
                         b=b+1;
                         v=0;
                    }
             }
             else
             if(i%2==0)
             {
                    v=v+1;
                    if(v==1)
                            b=b+1;
                    else
                    if(v==2)
                            r=r+1;
                    else
                    if(v==3)
                    {
                            g=g+1;
                            v=0;
                    }

             }
             else
             {
                  v=v+1;
                  if(v==1)
                          g=g+1;
                  else
                  if(v==2)
                          b=b+1;
                  else
                  if(v==3)
                  {
                          r=r+1;
                          v=0;
                  }
             }
          }
          if(i==3)
          {
                  i=0;
                  comprimento=comprimento-3;
          }
      }
      printf("%d %d %d\n",r,g,b);
      return 0;
}
