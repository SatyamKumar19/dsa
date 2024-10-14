#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node* next;

node(int d){
data = d;
next = nullptr;
}


} ;
node* convertall(vector<int> &arr ){
if(arr.empty()) return nullptr;
node* head = new node (arr[0]);
node* mover = head;
for(int i=1; i<arr.size();i++){

mover->next= new node(arr[i]);
mover = mover->next;
}
return head;
}
int lengthofll(node* head){
int cnt =0;
node* temp = head;
while(temp != nullptr){
temp= temp->next;
cnt++;

}
return cnt;



}
void printlist(node* head){
 node* current = head;
 while(current != nullptr){
    cout<<current->data<<" ";
    current= current-> next;

 }




}
int main(){
vector<int> arr = {12,3,4,56};
node* head =  convertall(arr);
node* current = head;
while (current != nullptr){
    cout<<current->data << " ";
    current = current->next;
}
return 0;

}
