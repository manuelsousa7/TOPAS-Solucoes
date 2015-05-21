#include <stdio.h>
#include <string.h>

main()
{
      int i;
      char string[501];
      scanf("%s",&string);
      for(i=0;i<strlen(string);i++)
      {
                                   
         if(i%2==0)             
         printf("%c",string[i+1]);  
         else  
         printf("%c",string[i-1]); 
           
      }
      printf("\n");
      return 0;
}
