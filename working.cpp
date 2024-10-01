#include<bits/stdc++.h>
using namespace std;
struct node {
 int data;
 node* next;
};
void print(int value){
   node* temp=new_temp(value);
    // node* temp=new_temp;
  if(head==nullptr){
    head=new temp;
    return;
  /*}
  else{
    node* t=new t;
    while(t!=nullptr){
       temp=t->next;

    }
    t->next=temp;

  }*/


}


int main(){
    node* head=new node(10);
    head->next=new node(20);
    head->next->next= new node(30);
    head->next->next->next=new node(40);
    cout<<"link_list";
    print(value);
    return 0;

}
