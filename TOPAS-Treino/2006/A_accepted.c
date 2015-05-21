#include <stdio.h>

main()
{
     int n1,n2,i;
     scanf("%d",&n1);
     scanf("%d",&n2);
     for(i=0;i<n1;i++)
     {
             if(n2==1)
                      printf("GOOD LUCK\n");
             else
             if(n2==2)   
                      printf("BUENA SUERTE\n");
             else
             if(n2==3)  
                      printf("BONNE CHANCE\n");
             else
             if(n2==4) 
                      printf("BUONA FORTUNA\n");  
             else
             if(n2==5)
                      printf("VIEL GLUECK\n");        
     }
     return 0;
}
