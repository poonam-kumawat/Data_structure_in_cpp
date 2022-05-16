#include<iostream>
using namespace std;
int main()
{

    int a[20],n,i,j,k,temp;
    cout<<"Roll no:-33\n";
    cout<<"Enter Size of array";
    cin>>n;
    cout<<"\n Enter the Array Elements";
    for(i=0;i<n;i++)
    {

        cin>>a[i];
    }
    cout<<"\n Entered Element are:";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    for(i=0;i<n;i++)
    {
        int flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
            cout<<"\n\n pass"<<i+1<<":";
            for(k=0;k<n;k++)
            {
                cout<<a[k]<<"\t";
            }
        }
    }
    cout<<"\n\n The Sorted array is: ";
    for(i=0;i<n;i++)
    {

        cout<<"\t"<<a[i]<<"\t";

    }
    return 0;
}
