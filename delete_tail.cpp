#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int d){
        data = d;
        next = nullptr;
    }

};
node* convertarr2ll(vector<int> &arr){
    if(arr.empty()) return =nullptr;
    node* head= new node (arr[0]);
    node* mover = head;

    for(int i=1;i<arr.size();i++){
       mover->next = new node(arr[i]);
       mover = mover->next;
        
    }
    return head;




}
node* delete_tail(node* head){
    if(head == nullptr && head ->next == nullptr ) return = nullptr;
    node* temp = head;
    while(temp->next->next  != nullptr){
     temp =temp->next;

    }
    delete (temp->next);
     temp->next = nullptr;
     return temp;
}
void print(node* head ){
while(head != nullptr){
    cout<<head->data<<" ";
    head = head->next;
}

}
int main (){
vector<int> arr {13,4,5,6,3};
node* head = convertarr2ll (vector<int> arr);
head = delete_tail(head);
print(head);


}