#include<iostream>
using namespace std;
void trversing(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
   trversing(arr,n);
    cout<<"after trversing\n";
   for(int i=0;i<n;i++){
   cout<<arr[i];

   cout<<endl;

   }


}