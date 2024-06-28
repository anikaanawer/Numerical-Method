#include <bits/stdc++.h>
#define nl endl
using namespace std;

int horner(int poly[], int n, int x)
{
    int ans = poly[0];

    for (int i=1; i<n; i++)
        ans = ans*x + poly[i];

    return ans;
}

int main()
{
    int n,x;
    cout<<"Enter the total value of polynomial: ";
    cin>>n;

    int a[n+6];

    cout<<"Enter the polynomial: ";

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the value of x: ";
    cin>>x;

    cout << "Value of polynomial is = " << horner(a, n, x);

}


