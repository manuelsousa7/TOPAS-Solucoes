#include <stdio.h>

main()
{
     long int n1,n2;
     scanf("%ld %ld",&n1,&n2);
     if(n1==n2)
     {printf("The perimeter of the square is %ld m.\n",((n1*2)+(n2*2)));
     printf("The area of the square is %ld m2.\n",(n1*n2)); }
     else
     {printf("The perimeter of the rectangle is %ld m.\n",((n1*2)+(n2*2)));
     printf("The area of the rectangle is %ld m2.\n",(n1*n2)); }
     return 0;
}
