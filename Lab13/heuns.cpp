#include<iostream>
#include <iomanip>
using namespace std;

float f(float x, float y)
{
    return 2*(y/x);
}

int main()
{
    float x, y, h ;
    cout<<"enter the initial value of x"<<endl;
    cin>>x;

    cout<<"enter the initial value of y"<<endl;
    cin>>y;

    cout<<"enter the value of h"<<endl;
    cin>>h;

    float xn;

    cout<<"enter the last value of x"<<endl;
    cin>>xn;

    cout<<endl<<"Result"<<endl;
    float y1;
    while(x+h<=xn){
            y1=(h/2)*(f(x,y)+f(x+h,y+h*f(x,y)));
            y=y+y1;
            x=x+h;
         //  printf("y = %f\tx = %f\n",y,x);
       //  cout << setprecision(2) << y << '\n';
           cout<<"y = "<<y<<"         "<<"x = "<<x<<endl;


    }
    return 0;
}
