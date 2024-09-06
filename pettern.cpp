
#include<iostream>
using namespace std;
void symmetry(int n) {
        int inst=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<'*'<<" ";
        }
        for(int j=0;j<inst;j++){
            cout<<"  ";

        }
        for(int j=1;j<=n-i;j++){
            cout<<'*'<<" ";
        }
        inst+=2;
        cout<<endl;
    }
     inst=8;
    for(int i=1;i<=n;i++ ){
        for(int j=1;j<=i;j++){
            cout<<'*'<<" ";
        }
        for(int j=0;j<inst;j++){
            cout<<"  ";

        }
        for (int j = 1; j <= i; j++) {
            cout <<'*' << " ";
        }
        inst -= 2;
        cout << endl;
    }
}
int main(){
    int n;
    cout<<"enter the number";
cin>>n;
symmetry(n);
}