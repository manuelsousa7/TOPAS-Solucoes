#include<iostream>
#define max 25

using namespace std;
int square[max][max];

int check(int);

int summ=0;

int main()

{

    int i,j,k,size,flag;


    cin >> size;

      for(i=0;i<size;i++)

     {

           for(j=0;j<size;j++)

          {

               cin >> square[i][j];

         }

    }     

     flag=check(size);

    if(flag)

    {

          cout << summ << endl;

    }

     else

         cout << "0" << endl;

 }



int check(int n)

{

    int i,j,k,sum,tsum=0;

    sum=(int)(( n * ( n * n + 1)))/2;
	summ=sum;
     /* checking sum of each coloumn is same */

    for(i=0;i<n;i++)

   {

        tsum=0;

        for(j=0;j<n;j++)

       {

             tsum=tsum+square[i][j];

       }

        if(tsum!=sum)

             return 0;

   }





/* checking sum of each row is same */

    for(j=0;j<n;j++)

   {

          tsum=0;

          for(i=0;i<n;i++)

         {

                 tsum=tsum+square[i][j];

         }

         if(tsum!=sum)

               return 0;

    }





/* checking sum of diagonal is same */

     tsum=0;

     for(i=0;i<n;i++)

     {

           tsum=tsum+square[i][i];

     }

      if(tsum!=sum)

            return 0;

    

/* checking sum of diagonal is same */

     for(i=0;i<n;i++)

     {

           tsum=0;

           for(j=n-1;j>=0;j--)

          {

                tsum=tsum+square[i][j];

         }

          if(tsum!=sum)

          return 0;

     }

      return 1;

}
