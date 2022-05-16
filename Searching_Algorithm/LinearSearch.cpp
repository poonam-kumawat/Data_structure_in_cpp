#include<iostream>
using namespace std;
int main()
{
    int a[20],i,n,x,flag=0;
    cout<<"\nEnter Size of Array: ";
    cin>>n;
    cout<<"Enter the element of Array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter number you want to Search: ";
    cin>>x;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            flag=1;
        }
        if(flag==1)
        {
            cout<<"\nNumber found";
        }
        else
            {
            cout<<"\nNumber not found ";
            }
    }
    return 0;
}


