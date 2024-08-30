#include<iostream>
using namespace std;
int num=1;
void printfun(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        cout<< num<<" ";
        num+=1;
        }
cout<<endl;
    }
} 
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    printfun(n);
    }