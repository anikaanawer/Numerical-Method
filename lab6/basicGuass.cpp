#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

#define   SIZE   10

using namespace std;

int main()
{
	 float a[SIZE][SIZE], x[SIZE], r;
	 int i,j,k,n;

   //  cout<< setprecision(3)<< fixed;

	 cout<<"Enter number of unknowns: ";//x y z 3ta
	 cin>>n; //3
	 cout<<"Enter Coefficients of Augmented Matrix: "<< endl;
	 for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=n+1;j++)
		  {
			   cout<<"a["<< i<<"]["<< j<<"]= ";
			   cin>>a[i][j]; //constant value soho dite hobe
		  }
	 }

	 for(i=1;i<=n-1;i++) /* Applying Gauss Elimination */ //i=1,2
	 {
		  if(a[i][i] == 0.0)
		  {
			   cout<<"Mathematical Error!";
			   exit(0);
		  }
		  for(j=i+1;j<=n;j++)//j=2, 3
		  {
			   r = a[j][i]/a[i][i]; //a[2][1]/a[1][1]=3/2

			   for(k=1;k<=n+1;k++) //k=1,2,3,4
			   {
			  		a[j][k] = a[j][k] - r*a[i][k];//a[2][1]=a[2][1]-3/2 a[1][1]=3-3/2*2=0

			   }
		  }
	 }

	 x[n] = a[n][n+1]/a[n][n];  /* Obtaining Solution by Back Substitution Method */
	                            //x[3]=a[3][4]/a[3][3]=16 er ghor/9z er ghor

	 for(i=n-1;i>=1;i--) //i=2,1
	 {
		  x[i] = a[i][n+1]; //x[2]=a[2][4]=18 ,x[1]=a[1][4]=10
		  for(j=i+1;j<=n;j++)//j=3,2
		  {
		  		x[i] = x[i] - a[i][j]*x[j]; //x[2] =x[2]- a[2][3]* x[3]
		  }
		  x[i] = x[i]/a[i][i];
	 }

	 cout<< endl<<"Solution: "<< endl;
	 for(i=1;i<=n;i++)
	 {
	  	cout<<"x["<< i<<"] = "<< x[i]<< endl;
	 // 	printf("%2f\n",x[i]);
	 }

	 return(0);
}
///2x+y+z=10
///3x+2y+3z=18
///x+4y+9z=16
