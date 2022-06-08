#include<iostream>
#include<conio.h>
using namespace std;
void max_heapify(int *a, int i,int n)
{
    int l,temp;
    temp=a[i];
    l=2*i;
    while(l<=n)
    {
        if(l<n && a[l+1]>a[l])
            l=l+1;
        if(temp>a[l])
            break;
        else if(temp<=a[l])
        {
            a[l/2]=a[l];
            l=2*l;
        }
    }
    a[l/2]=temp;
    return;
}
void build_maxheap(int *a, int n)
{
    int i;
    for(i=n/2;i>=1;i--)
    {
        max_heapify(a,i,n);
    }


}
int main()
{
    int n,i,x;
    cout<<"\nRoll no-33\n Enter number of Elements of Array\n";
    cin>>n;
    int a[20];
    for(i=1;i<=n;i++)
    {
        cout<<"Enter Element"<<(i)<<endl;
        cin>>a[i];
    }
    build_maxheap(a,n);
    cout<<"max Heap\n";
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
