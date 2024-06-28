//traphizoidal
#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#define f(x) x/(1+x)
//#define f(x) 1/(1+x)
using namespace std;
int main()
{
    float l, u, k;
    float i, n;


    cout<<"Lower limit of integration: ";
    cin>>l;
    cout<<"Upper limit of integration: ";
    cin>>u;
    cout<<"Intervals: ";
    cin>>n;

    float h = (u - l)/n;

    //float integration=0.0;
    float integration = f(l) + f(u);

    for(i=1; i<n; i++)
    {
        k =l + (i*h);
        //cout<<k<<endl;

        integration += (2 * (k/(1+k)) );

    }

    integration = integration * h/2;
    cout<<endl;
    //cout<< endl<<"Required value of integration is: "<< integration;
    cout<<fixed<<setprecision(3)<<integration<<endl;

    return 0;
}


