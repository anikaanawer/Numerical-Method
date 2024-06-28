#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int c;
    float x[50], y[50], a, b;

    cout<<"Enter the total points " << endl;
    cin >> c;
    int i;
    for(i=1; i<=c; i++)
    {

        cout<<"Co-ordinates :  "<<i<<" : ";
        cin>>x[i];
        cin>>y[i];

    }
    float sumX=0, sumX2=0, sumY=0, sumXY=0;
    for(i=1; i<=c; i++)
    {
// sumX = sumX + log(x[i]);
        sumX = sumX + x[i];
// sumX2 = sumX2 + log(x[i])*log(x[i]);
        sumX2 = sumX2+( x[i] * x[i] );
        //sumY = sumY + log(y[i]);
        sumY = sumY + y[i];
        //sumXY = sumXY + log(x[i])*log(y[i]);
        sumXY = sumXY + ( x[i]*y[i] );

    }
    cout<<"sumX = "<<sumX<<endl;
    cout<<"sumX2 = "<<sumX2<<endl;
    cout<<"sumY = "<<sumY<<endl;
    cout<<"sumXY = "<<sumXY<<endl;
//b = (c*sumXY-sumX*sumY)/(c*sumX2-sumX*sumX);
//E = ((sumY*sumX2) - (sumX*sumXY))/();
    b = (c * sumXY - sumX * sumY) / (c * sumX2 - sumX * sumX);
    //  a = (sumY - b * sumX) / c;
    a=((sumY*sumX2)-(sumX*sumXY))/((c*sumX2)-(sumX * sumX));


   //a = exp(E);


    cout << "Values are: a = " << a << " and b = " << b;

    return(0);
}

