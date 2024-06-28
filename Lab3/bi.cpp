//Bisection
#include<bits/stdc++.h>

using namespace std;

//function used is x^3-2x^2+3
//x^3-x-1
double func(double x)
{
    return x*x*x - x - 1;
}


double c;

void bisection(double a,double b, double e)
{
    if(func(a) * func(b) >= 0)
    {
        cout<<"Incorrect a and b";
        return;
    }

    c=a;

    while (abs(b-a) >=e) // stopping criterion E
    {
        c = (a+b)/2;
        if (func(c) == 0.0){

            break;
        }
        else if (func(c)*func(a) < 0){

                b=c;
        }
        else{

                a=c;
        }
    }
}

int main()
{
    double e,a,b;
    cin>>a>>b>>e; //a=1,b=2
   // cin>>e;//0.01
    bisection(a,b,e);
    cout<<"\n";
    cout<<"The value of root is = "<<c<<endl;

    return 0;
}
