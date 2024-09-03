#include<bits/stdc++.h>
using namespace std;
void printfun(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        int breakpoint=(2*i+1)/2;
        char ch='A';
        for(int j=1;j<=2*i+1;j++){
            cout<< ch<<" ";
            if(j<=breakpoint)ch++;
            else ch--;
            
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    printfun(n);
}