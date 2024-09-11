#include<bits/stdc++.h>
using namespace std;
int printfun(int n){
     int rev=0;
    while(n>0){
        int lastdigits=n%10;
        n=n/10;
          rev=(rev*10)+lastdigits;
    }
    cout<<rev;
}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    printfun(n);
}