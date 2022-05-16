#include<iostream>
using namespace std;
int main()
{
    int a[20],n,i,j,k,x,m,temp;
    cout<<"Rollno:-33";
    cout<<"\nEnter the size of Array: ";
    cin>>n;
    cout<<"\nEnter The Array Element: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nElement Are: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(i=0;i<n;i++)
    {
        m=a[i];
        x=i;
        for(j=i+1;j<n;j++)
        {
            if(m>a[j])
            {
                m=a[j];
                x=j;
            }
        }
        temp=a[i];
        a[i]=m;
        a[x]=temp;
        cout<<"\n\n pass"<<i+1<<":"<<" ";
        for(k=0;k<n;k++)
        {
            cout<<a[k]<<" ";
        }
    }
    cout<<"\n\n Sorted Array is: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
