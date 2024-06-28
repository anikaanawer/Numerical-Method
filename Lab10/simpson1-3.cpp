#include<iostream>
#include<math.h>


#define f(x) pow(2.7183,x)
//#define f(x) 1/x
using namespace std;
int main()
{
    float l, u;
    int n;

    cout<<"lower limit of integration: ";
    cin>>l;
    cout<<"upper limit of integration: ";
    cin>>u;
    cout<<"number of intervals: ";
    cin>>n;


    float h = (u - l)/n;


    float integration = f(l) + f(u);

    int i;
    float j;
    for(i=1; i<=n-1; i++)
    {
        j = l+ i*h;

        if(i%2==0)
        {
            integration = integration + 2 * (f(j));
        }
        else
        {
            integration = integration + 4 * (f(j));
        }

    }

    integration = integration * h/3;

    cout<< endl <<"Required value of integration is: "<< integration;

    return 0;
}
