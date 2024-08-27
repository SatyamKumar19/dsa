#include<bits/stdc++.h>
using namespace std;
void printpy(int n){
    for(int i=0;i<n;i++){
for(int j=0;j<i;j++){
    cout<<" ";
}
for(int j=0;j< 2*n-(2*i+1);j++){
    cout<<"*";

}
cout<<endl;

    }
}
int main(){

    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    printpy(n);
} 