#include<iostream>
using namespace std;
void printfun(int n){

    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<< ch<<" ";
        }
        cout<<endl;
}}
int main(){
    int n;
    cout<<"enter the number";
cin>>n;
printfun(n);

}