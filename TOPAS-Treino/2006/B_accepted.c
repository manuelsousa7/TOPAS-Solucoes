#include <stdio.h>
#include <string.h>
main()
{
     int golo=0,i=0,max=0;
     char c[2];
     for(;;)
     {
           scanf("%s",&c); 
           if(strcmp(c,"!")==0)
                 break;
           if(strcmp(c,"o")==0 || strcmp(c,"O")==0)
           {
                   golo=golo+1;
                   if(golo>max)
                         max=golo;
           }
           else
                   golo=0;

     
     
     }
     printf("%d\n",max);
     return 0;
}
