#include<bits/stdc++.h>
using namespace std;
void printfun(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<< ch<<" ";
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