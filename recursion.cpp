#include<iostream>
using namespace std;
int factorial( int n){
if(n<=1)
   return 1;
else
return n *factorial(n-1);

    


}
int main(){
int n;
cout<<"enter the number ";
cin>>n;

cout<<"the factorial number is "<< n <<" factorial is "<< factorial(n)<<endl;
return 0;

}