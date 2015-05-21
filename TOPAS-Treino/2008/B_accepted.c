#include <stdio.h>
#include <string.h>

main()
{
      int i,conta=0;
      char string[501];
      scanf("%s",&string);
      for(i=0;i<strlen(string);i++)
      {
              if(string[i]=='P' || string[i]=='p')      
              conta=conta+1;                           
      }
      printf("%d\n",conta);
      return 0;
}
