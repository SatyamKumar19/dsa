#include<iostream>
using namespace std;
void printfun(int &n,int loc,int arr[]){
    for(int i=loc;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
}

int main(){
    int n,loc;
    cout<<"enter the max size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the size of element";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the loc";
    cin>>loc;
      printfun(n, loc, arr);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
