#include<iostream>
using namespace std;

int search(int a[],int l,int r,int k)
{
   int mid=(l+r)/2;
   if(a[mid]==k)
   return mid;
   if(a[mid]>k)
   return search(a,l,mid-1,k);
   if(a[mid]<k)
   return search(a,mid+1,r,k);
   return 0;
}

void count(int a[],int n,int k)
{
    int m=search(a,0,n-1,k);
    if(m==-1)
    cout<<"key not found"<<endl;
    int c=1;
    int left=m-1;
    while(left>=0 && a[left]==k)
    {
        c++;
        left--;
    }
    int right=m+1;
    while(right<=n-1 && a[right]==k)
    {
        c++;
        right++;
    }
   cout<<k<<"-"<<c<<endl; 
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
        int k,l=0,r=n-1;
        cin>>k;
        count(a,n,k);
    }
    return 0;
}
