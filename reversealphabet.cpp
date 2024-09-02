#include<bits/stdc++.h>
using namespace std;
void printrev(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout<< ch<<" ";
        }
        cout<< endl;
    }
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    printrev(n);
}