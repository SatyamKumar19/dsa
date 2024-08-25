#include<iostream>
using namespace std;
 void printfun(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<< endl;
    }

 }
int main(){
    int n;
    cout<<"enter the number";
        cin>>n;
    printfun(n);
}