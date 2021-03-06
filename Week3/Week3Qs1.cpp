#include<iostream>
using namespace std;

void sort(int a[],int n)
{
    int count=0,shift=0;
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            count++;
            j=j-1;
            shift++;
        }
        a[j+1]=temp;
        shift++;
    }
    cout<<"comparisions = "<<count<<endl;
    cout<<"shifts = "<<shift<<endl;
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
