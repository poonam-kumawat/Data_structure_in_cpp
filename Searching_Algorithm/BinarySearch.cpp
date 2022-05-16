#include<iostream>
using namespace std;
int main()
{
    int a[20],n,x,lower,upper,mid,flag=0,i;
    cout<<"\nEnter Size of Array: ";
    cin>>n;
    cout<<"Enter the Elements of Array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter Element you want to Search: ";
    cin>>x;
    lower=0;
    upper=n-1;
    while(lower<=upper)
    {
        mid=(lower+upper)/2;
        if(x=a[mid])
        {
            flag=1;
            break;
        }
        if(x>a[mid])
        {
            lower=mid+1;
        }

        else
        {
          upper=mid+1;
        }

    }
    if(flag==1)
    {
        cout<<"Element Found";
    }
    else
    {
        cout<<"Element Not Found";
    }

    return 0;

}
