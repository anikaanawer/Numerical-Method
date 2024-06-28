///horners rule
#include <bits/stdc++.h>
using namespace std;

int horner(int poly[], int n, int x)
{
	int result = poly[0];

	for (int i=1; i<n; i++)
		result = result*x + poly[i];

	return result;
}

int main()
{
    int n,x;
    cout<<"Enter the total value of polynomial"<<endl;
    cin>>n;
    int arr[n+5];
    cout<<"Enter the polynomial"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of x"<<endl;
    cin>>x;
    cout << "Value of polynomial is " << horner(arr, n, x);
	return 0;

}

