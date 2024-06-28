//newton raphson
#include <iostream>
#include <math.h>
using namespace std;
float fn(float x)
{
     return  pow(x,2)-(3*x)+2 ;
}
float de(float x)
{
     return  2*x - 3 ;
}
int main()
{   float a,n=0,z,e;
    cout<<"Enter Number ";//0
    cin>>a;
    cin>>e;//0.001
    do
    {   n++;
        z=a-(fn(a)/de(a));
        cout<<"The iterative "<<n<<" root is "<<z;
        a=z;
        cout<<endl;
    }while( fabs(fn(z))>e);
    return 0;
}
