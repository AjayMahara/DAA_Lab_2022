#include<iostream>
using namespace std;

int c=0;
void search(int a[],int n,int l,int r,int k)
{
    
    if(l<=r)
    {
    int mid=(l+r)/2;
    c++;
    if(a[mid]==k)
    {
    cout<<"present "<<c;
    c=0;
    }
    if(k<a[mid])
    search(a,n,l,mid-1,k);
    else if(k>a[mid])
    search(a,n,mid+1,r,k);
    }
    if(l>r)
    {
    cout<<"not present "<<c;
    c=0;
    }
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
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int k,l=1,r=n;
    cin>>k;
    search(a,n,l,r,k);
    }
    return 0;
}
