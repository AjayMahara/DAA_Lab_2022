#include<iostream>
using namespace std;

void search(int a[],int n)
{
    int x=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(a[i]+a[j]==a[k])
               {
                cout<<i<<" "<<j<<" "<<k<<endl;
                x=1;
               }
            }
        }
    }
   if(x==0)
   cout<<"no sequence found"<<endl;
    
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
        search(a,n);
       
    }
    return 0;
}
