//gauss
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{

    int n,i,j,k,temp;
    float a[10][10],c,d[10]={0};

    cout<<"No of equations: ";
    cin>>n;
    cout<<"Enter the Coefficient of all Variables of the equation: \n";
    for(i=0;i<n;i++)
    {
        cout<<"equation: "<<i+1<< "   ";
        for(j=0;j<=n;j++)
            cin>>a[i][j];
    }


    for(i=n-1;i>0;i--) // partial pivoting  2,1
    {
        if(a[i-1][0]<a[i][0])  //a[1][0]<a[2][0]   2<4
            for(j=0;j<=n;j++)  // 0,1,2,3
            {
                c=a[i][j]; //c=a[2][0]=4  //swapping
                a[i][j]=a[i-1][j]; //a[2][0]=a[1][0]=2
                a[i-1][j]=c; // a[1][0]=4
            }
    }


    for(i=0;i<n;i++)   //DISPLAY MATRIX
    {
        for(j=0;j<=n;j++)
            printf("%6.1f",a[i][j]);
        printf("\n");
    }

    for(k=0;k<n-1;k++) //changing to upper triangular matrix ,Forward elimination process k=0,1
        for(i=k;i<n-1;i++) //i=0,1
        {
            c= (a[i+1][k]/a[k][k]) ; //a[1][0]/a[0][0]

            for(j=0;j<=n;j++)
                a[i+1][j]-=c*a[k][j];
        }



    printf("\n\n");  // DISPLAYING UPPER TRIANGULAr MATRIX
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
            printf("%6.1f",a[i][j]);

        printf("\n");
	}



    for(i=n-1;i>=0;i--) //Backward Substitution method
    {
        c=0;
        for(j=i;j<=n-1;j++)
            c=c+a[i][j]*d[j];

        d[i]=(a[i][n]-c)/a[i][i];
    }



    for(i=0;i<n;i++) // DISPLAY
    cout<<d[i]<<endl;


  //  getch();
    return 0;


}
