#include<bits/stdc++.h>
using namespace std;
struct node
{    int info;
	node *link;
};
int main()
{ 
    int item,n,i;
node *ptr,*START;
cout<<("Enter total nummber of nodes ");
cin>>(n);
ptr=new node;
START=ptr;
for(i=1;i<=n;i++)
{
cout<<("Enter node number %d of list ",i);
cin>>(item);
ptr->info=item;
if(i==n)
ptr->link=NULL;
else
ptr->link=new node;
ptr=ptr->link;
}	
ptr=START;
while(ptr!=NULL)
{
cout<<(ptr->info);
cout<<endl;
ptr=ptr->link;
}
}