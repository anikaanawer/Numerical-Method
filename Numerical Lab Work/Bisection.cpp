#include<bits/stdc++.h>
using namespace std;

double root;

//function used is x^3-2x^2+3
//x^3-x-1

double fun(double x)
{
    return x*x*x - x - 1;
}

void bisection(double a,double b)
{
    if(fun(a) * fun(b) >= 0)
    {
        cout<<"Incorrect a and b";
        return;
    }

    root=a;

    while (abs(b-a) >=0.001)
    {
        root = (a+b)/2;

        if (fun(root) == 0.0) break;

        else if (fun(root)*fun(a) < 0) b=root;

        else
            a=root;

            cout<<"The value of root is = "<<root<<endl;
    }
}

int main()
{
    double a,b;
    cin>>a>>b;
    bisection(a,b);

}

