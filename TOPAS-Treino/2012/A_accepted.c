#include <stdio.h>

main()
{
      int n,i;
      scanf("%d",&n);
      int n1[n],n2[n];  
      char str[n][10],str1[n][10];
      for(i=0;i<n;i++)
      {
                  scanf("%d %d %s %s",&n1[i],&n2[i],&str[i],str1[i]);
      }  
      for(i=0;i<n;i++)
      {
                  if(str[i][0]=='Q')
                  printf("Q: %d R: %d\n",(n1[i]/n2[i]),(n1[i]%n2[i]));
                  if(str[i][0]=='R')
                  printf("R: %d Q: %d\n",(n1[i]%n2[i]),(n1[i]/n2[i]));
      }   
      return 0;
}
