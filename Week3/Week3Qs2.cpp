#include<iostream>
using namespace std;

void sort(int a[],int n)
{
    int count=0,swap=0;
    for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;j++)
       {
           if(a[j]<a[i])
           {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
           }
            count++;
       }
       swap++;
    }
    cout<<"comparisions = "<<count<<endl;
    cout<<"swaps = "<<swap<<endl;
}

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
        sort(a,n);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        return 0;
    }
}
