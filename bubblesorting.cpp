
#include<iostream>
using namespace std;
int main(){
    int arr[5],temp;
    cout<<"enter the five array";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

cout<<"bubbling element";
    for(int i=0;i<5;i++){
        for(int j=0;j<5-1;j++){
            if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i];
        cout<<endl;
    }

}