#include<bits/stdc++.h>
using namespace std;

struct node
{    int info;
	node *link;
};
int main()
{ int item,n,i;
node *ptr,*START;
printf("Enter total nummber of nodes ");
scanf("%d",&n);
ptr=new node;
START=ptr;
for(i=1;i<=n;i++)
{
printf("Enter node number %d of list ",i);
scanf("%d",&item);
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
printf("\t%d",ptr->info);
ptr=ptr->link;
}
}