#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node* next;
node(int n){
    data=n;
    next=nullptr;

}


};
node* convertarr2ll(vector<int> &arr){
node* head = new node(arr[0]);
node* mover = head;
for(int i = 1;i<arr.size();i++){
    node* temp = new node{arr[i]};
    mover->next = temp;
    mover = temp;
}
return head;

}
int lengthofll(node* head){
    int cnt=0;
    node* temp = head;
    while(temp != nullptr){
        temp =temp->next;
        cnt++;
    }
    return cnt;
}
    node* delete_begg(node*head){
        if(head==nullptr)return head;
        node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
     void print(node* head){
        while(head != nullptr){
            cout<<head->data<<" ";
            head = head->next;
        }
        
     
}
int main(){
vector<int> arr = {2,5,8,7};
node* head = convertarr2ll(arr);
head = delete_begg(head);
print(head);




}