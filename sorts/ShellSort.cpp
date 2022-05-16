#include<iostream>
#include<math.h>
using namespace std;
void Shellsort(int a[],int n)
{
    int d,j,k,temp,flag;
    for(d=floor(n/2);d>0;d=floor(d/2))
    {
        flag=1;
        while(flag==1)
        {
            for(j=0;j<n-d;j++)
            {
                flag=0;
                if(a[j]>a[j+d])
                {
                    temp=a[j];
                    a[j]=a[j+d];
                    a[j+d]=temp;
                    flag=1;
                }
            }
        }
    }
}
int main()
{
    int n,i;
    cout<<"Rollno:-33\n";
    cout<<"\nEnter the number of element: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter Element"<<i+1<<":"<<" ";
        cin>>a[i];
    }
    Shellsort(a,n);
    cout<<"\nSorted Data is: ";
    for(i=0;i<n;i++)
    {
        cout<<"->"<<a[i];

    }
    return 0;
}
