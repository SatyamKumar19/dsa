#include<bits/stdc++.h>
using namespace std;
void printf(int n){
    for(int i=0;i<n;i++){
        int start=1;
        if(i%2==0)start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout<< start<<" ";
            start=1-start;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    printf(n);
}