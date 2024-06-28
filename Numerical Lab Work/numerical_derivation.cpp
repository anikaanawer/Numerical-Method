#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Number of values given
    int n = 5;
    float xa[] = { 1,2,3,4,5};

    // y[][] is used for difference table
    // with y[][0] used for input

    float y[n][n];
    y[0][0] = 7;
    y[1][0] = 19;
    y[2][0] = 37;
    y[3][0] = 61;
    y[4][0] = 91;


    // Calculating the forward difference
    // table
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
            y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
    }

    // Displaying the forward difference table

    cout<<"Newtons forward interpolution table : "<<endl<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << setw(4) << xa[i]
             << "\t";
        for (int j = 0; j < n - i; j++)
            cout << setw(4) << y[i][j]
                 << "\t";
        cout << endl;
    }


    int x,x0,h,u;
    float t1,t2,t3,dv1,dv2;

    cout<<endl<<"The value of X : ";
    cin>>x;

    //calculating the value of u

    x0=xa[0];
    h=xa[1]-xa[0];
    u=(x-x0)/h;

    cout<<"Value of U : "<< u<<endl;

    /// 1st derivation

   // dv1=( y[0][0] - (1/2)*y[0][1] +  (1/3)*y[0][2] - (1/4)*y[0][3] ) / h;

    t1=((0.5)*y[0][1]);
    t2=((0.3333333333)*y[0][2]);
    t3=((0.25)*y[0][3]);

    dv1=(  y[0][0] - t1 + t2 - t3 ) / h;

    cout<<"1st derivation : "<< dv1<<endl;

    /// 2nd derivation

    dv2=( y[0][1] - y[0][2] + (11/12)*y[0][3] ) / h;

    cout<<"2nd derivation : "<< dv2<<endl;

    return 0;
}

