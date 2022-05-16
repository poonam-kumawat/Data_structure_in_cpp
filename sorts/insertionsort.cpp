#include<iostream>
using namespace std;
int main()
{

    int a[20],n,i,j,k,temp;
    cout<<"Rollno:-33\n";
    cout<<"Enter size of Array: ";
    cin>>n;
    cout<<"\nEnter array Element To Insert: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nEntered Element are: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
        cout<<"\n\n pass"<<i+1<<":"<<" ";
        for(k=0;k<n;k++)
        {
            cout<<a[k]<<" ";
        }
    }
    cout<<"\n\n The Sorted Array is: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

