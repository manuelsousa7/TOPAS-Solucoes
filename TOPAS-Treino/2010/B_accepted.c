#include <stdio.h>
#include <string.h>
main()
{
      int i,n=0,max=0;
      char string[100];
      scanf("%s",&string);
      for(i=0;i<strlen(string);i++)
      {
         if(string[i]=='o' || string[i]=='O')
         n=n+1;
         else
         {
             if (n>max)
             max=n;
             n=0;
         }
      }
      printf("%d\n",max);
      return 0;
}
