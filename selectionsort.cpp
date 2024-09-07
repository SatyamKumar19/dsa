#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the  element ";
    cin>>n;
    int arr[n],temp;
    for(int i=0;i<n;i++){
        cin>>arr [i];
    }
    cout<<"selection sorting\n";
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){ 
                mini=j;
            }

        }
        int  temp=arr[i];
         arr[i]=arr[mini];
         arr[mini]=temp;

        for(i=0;i<n;i++){
            cout<<arr[i];
            cout<<endl;
        }
    }
} 