#include <iostream>
#include <conio.h>

using namespace std;
#define max 20
int main()
{
int a[max],i,n,loc = 0,item;
cout<<"Enter Size of Array: ";
cin>>n;
cout<<"Enter Elements in Array: ";
for (i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<"You are entering element in ending: ";
cout<<"Enter Element to be inserted: ";
cin>>item;
//searching location
for(i=0;i<=n;i++)
{
    a[n] = a[n+1];
}
a[n+1] = item;
//max
 if(n>max)
 {
   cout<<"You Cannot Insert more Elements! ";
 }
for (i=0;i<=n+1;i++)
{
    cout<<a[i];
    cout<< endl;
}
}