#include<iostream>
using namespace std;
void print2(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<" * ";
        }
        cout<< endl;
    }
}
int main(){
int n;
cout<<"enter the number"<<endl;
cin>>n;
print2(n);

}