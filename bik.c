#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;

}*head;

void create(int a[],int n)
{
    int i;
    struct node *t,*last;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=a[0];
    head->next=head;
    last=head;
    for(i=1;i<n;i++)
{
    t=(struct node *)malloc(sizeof(struct node));
    t->data=a[i];
    t->next=last->next;
    last->next=t;
    last=t;
}
}
void display(struct node *h)
{
    do{
        printf("%d",h->data);
        h=h->next;

    }
    while(h!=head);
    printf("\n");
}
int main ()
{
  int a[]={1,2,3,4,5,6};
  create(a,6);
  display(head);
  return 0;
}