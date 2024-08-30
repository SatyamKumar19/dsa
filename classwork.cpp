/*#include <iostream>
using namespace std;
int main() {
int arr[100],val,pos,i,size;
cout<<"Enter size of Array";
cin>>size;
cout<<"\n Enter Elements in Array";
for(i=0;i<size;i++)
{
cin>>arr[i];
}
cout<<"\n Enter position and element you want to insert";
cin>>pos>>val;

//shift all elements from last index to position
for(i=size;i>pos;i--)
{
arr[i]=arr[i-1];
}
arr[pos]=val;;
cout<<"After inserting elements are";
for(i=0;i<=size;i++)
{
cout<<"\t"<<arr[i];
}
return 0;
}
#include <iostream>
using namespace std;
int main() {
int num = 10;
int* ptr = &num;
cout << "Address of num: " << &num << endl;
cout << "Pointer ptr points to address: " << ptr <<endl;
cout << "Value at address stored in ptr: " << ptr << endl;
*ptr = 20;
cout << "New value of num: " << num << endl;
cout << "Value at address stored in ptr: " << *ptr << endl;

int arr[3] = {1, 2, 3};
int* arrPtr = arr;
cout << "Array elements using pointer arithmetic:" << endl;
for (int i = 0; i < 3; ++i) {
cout << "Element " << i << " = " << *(arrPtr + i) << endl;
}

return 0;
}*/
#include<iostream>
using namespace std;
void printfun(int n){
    int*ptr=&n;
    cout<<"address of n"<<&n<<endl;
    cout<<"pointer ptr points to address"<< ptr <<endl;
    cout<<"value of address of pointer"<<*ptr<<endl;}
int main(){
    int n=5;
    printfun(n);

}