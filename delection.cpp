#include<iostream>
using namespace std;
void delection_fun(int arr[],int &n,int position)
{
    if (position < 0 || position >= n) {
        cout << "Invalid position!" << endl;
        return;
    }
    for(int i=position;i < n-1;i++){
         arr[i] = arr[i + 1];
    } 
    n--;
}
int main(){
    int n,position;
    cout<<"enter the element";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    cout<<"delect the element";
    cin>>position;
    delection_fun(arr,n,position);
    for(int i=0;i<n;i++){
        cout<<arr[i];
        cout<<endl;
    } 
}