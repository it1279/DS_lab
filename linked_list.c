#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node*next;
};
struct node*head,*tail=NULL;

void create(int data)
{
struct node *newnode=(struct node *)malloc(sizeof(newnode));
newnode->data=data;
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
tail=newnode;
}
else
{
tail->next=newnode;
tail=tail->next;
}
return;
}

void display()
{
struct node *current=head;
if(head==NULL)
{
printf("empty linked list");
}
printf("elements in the linked list are:");
while(current!=NULL)
{
printf("%5d",current->data);
current=current->next;
}
return;
}

int main()
{
create(10);
create(20);
create(30);
create(40);
display();

return 0;
}



