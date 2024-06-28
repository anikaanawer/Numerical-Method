#include<bits/stdc++.h>
using namespace std;
int main()
{
    string num;
    int n,i;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Enter significant digits: ";
    cin>>n;
    int f=0,left=0;
    for(i=0; num[i]!='.'; i++)
    {
        if(num[i]>='1' && num[i]<='9')
        {
            f=1;
            left++;
        }
        else if(num[i]=='0' && f==1)
        {
            left++;
        }

    }
    int r = n - left, right=0;
    for(int j=i+1; j<num.size()-1; j++)
    {
        if(num[j]=='0' && right==0 && left==0)
        {
            continue;
        }
        else
        {
            r--;
            right=1;
            if(r==0)
            {
                int x=num[j]-'0';
                int y=num[j+1]-'0';
                if(y>5)
                {
                    x+=1;
                    num[j]=x+'0';
                    num.erase(j+1);
                }
                else if(y==5 && x%2==1)
                {
                    x+=1;
                    num[j]=x+'0';
                    num.erase(j+1);
                }
                else
                {
                    num.erase(j+1);

                }
            }
        }
    }
    cout<<num<<endl;
    return 0;
}
