#include <iostream>
#include <conio.h>

using namespace std;
#define max 20
int main()
{
int a[max],i,n,k,loc = 0,item;
cout<<"Enter Size of Array: ";
cin>>n;
cout<<"Enter Elements in Array: ";
for (i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<"Enter the Elements after which you want to Insert: ";
cin>>k;
cout<<"Enter Element to be inserted: ";
cin>>item;
//searching location
for(i=0;i<n;i++)
{
    if(a[i]==k)
    {
        loc=i+1;
        break;
    }
}

//max
if(n>=max)
{
 cout<<"You Cannot Insert more Elements! ";
}
//shifting of elements
for(i=n;i>=n;i--)
{
    a[i+1]=a[i];
}
//inserting element
a[loc]=item;
for(i=0;i<n+1;i++)
{
    cout<<a[i]<<endl;
}
}

