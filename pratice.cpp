
#include<iostream>
using namespace std;
int main(){
int n,total=100;
cout<<"enter the max size of array";
cin>>n;
int arr[n];
cout<<"enter the subject marks";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int sum=0;
for(int i=0;i<n;i++){
    sum+=arr[i];

}
cout<<"the sum of total marks= "<< sum ;
if(n>0){
    float percentage = (float(sum)/(n*total))*100;
    cout<<"\n total percentage "<<percentage <<"%"<<endl;
}
/*
void print_fun(int arr[],int &n,int position,int element){
  for(int i=n;i>=position;i--){
    arr[i+1]=arr[i];
  }
  arr[position]=element;
  n++;
}



int main(){
int n,position,element;
cout<<"enter the number";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<"enter the element";
cin>>element;
cout<<"enter the position where insert it";
cin>>position;
print_fun(arr,n,element,position);
for(int i=0;i<n;i++){
    cout<<arr[i];
    cout<<endl;
}*/

}
void print(int n,arr[])
int main(){
    print(n,arr);
}
