#include<iostream>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int k,count=0;
        cin>>k;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((a[i]-a[j])==k || (a[j]-a[i])==k)
               count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
