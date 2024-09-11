#include<bits/stdc++.h>
using namespace std;
void printfun(int n){
   int  count=0;
    while(n>0){
        int result=n%10;
        count=count+1;
        n=n/10;
    }
    cout<<count;
}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    printfun(n);

}