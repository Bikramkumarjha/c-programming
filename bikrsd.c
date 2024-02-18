#include<stdio.h>
#include<stdlib.h>
 
 struct node{
    int data;
    struct node *next;

 } *first=NULL;//*second=NULL,*third=NULL;;

 void create(int a[],int n)
 {
    int i;
    struct node *t,*last;
    first=(struct node *)malloc(sizeof(struct node));
    first->data=a[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

 }

 void create2(int a[],int n)
 {
    int i;
    struct node *t,*last;
    //second=(struct node *)malloc(sizeof(struct node));
    //second->data=a[0];
    //second->next=NULL;
    //last=second;

    for(i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

 }
  

  void display(struct node *p)
  {
    while(p!=NULL)
    {
       printf("%d ",p->data);
        p=p->next;
    }
  }

  void rdisplay(struct node *p)
  {
   if(p!=NULL)
   {   rdisplay(p->next);
      printf("%d",p->data);
      //rdisplay(p->next);

   }
  }

  int count(struct node *p)
  {
   int l=0;
   while(p)
   {
      l++;
      p=p->next;


   }
   return l;

  }
  int sum (struct node *p)
  {
   
   if(p==0)
   {
      return 0;
   }
   else{
      return (p->data +sum(p=p->next));
   }

  }
  void sum2(struct node *p)
  {
   int sum =0;
   while(p)
   {
      sum=sum+ p->data;
      p=p->next;
      //printf("%d",sum);
   }
   printf("%d\n\n",sum);
  }
  void max(struct node *p)
  {
   int max=-32867;
   while(p)
   {
      if(p->data>max)
      {
         max=p->data;
      }
      p=p->next;
   }
   printf("%d\n",max);
  }
  struct node * lsearch(struct node *p,int key)
  {
   struct node *q;
   while(p)
   {
      if(key==p->data)
      {
         q->next=p->next;
         p->next=first;
         first=p;
         return p;

      }
      q= p;
      p=p->next;
   }
   return NULL;
  }

 struct node * rsearch(struct node *p,int key )
 {
   if(p==NULL)
   return NULL;
   if(key==p->data)
   return p;
   return rsearch(p->next,key);

 }
 
 void insert (struct node *p,int index,int x)
 {
   struct node *t;
   if(index <0 || index >count(p) )
   return ;
   t=(struct node *)malloc(sizeof(struct node));
   t->data=x;

   if(index==0)
   {
      t->next=first;
      first =t;

   }
   else{
      for(int i=0;i<index-1;i++)
      p=p->next;
      t->next=p->next;
      p->next=t;
   }

 }

 void sortedinsert(struct node *p,int x)
 {
   struct node *t,*q=NULL;
   t=(struct node*)malloc(sizeof(struct node));
   t->data=x;
   t->next=NULL;
   if(first==NULL)
   {
      first=t;

   }
   else
   {
      while(p && p->data<x)\
      {
         q=p;
         p=p->next;

      }
      if(p==first)
      {
         t->next=first;
         first =t;

      }
      else{
         t->next=q->next;
         q->next=t;
      }
   }
 }


int delete(struct node *p,int index)
{
   struct node *q=NULL;
   int x=-1;
   if(index <1 || index > count(p))
   return -1;
   if(index==1)
   {
      q=first;
      x=first->data;
      first=first->next;
      free (q);
      return x;
   }
   else{
      for(int i=0;i<index-1;i++)
      {
         q=p;
         p=p->next;
      }
      q->next=p->next;
      x=p->data;
      free(p);
      return x;
   }
}

int issorted(struct node *p)
{
   int x=-65536;
   while(p!=NULL)
   {
      if(p->data<x)
      return 0;
      x=p->data;
      p=p->next;
   }
   return 1;
   
}

void reverse1(struct node *p)
{
   struct node *q=p;int *a;
   int i=0;
   a=(int *)malloc(sizeof(int)*count(p));
   while(q!=NULL)
   {
      a[i]=q->data;
      q=q->next;
      i++;
   }
   q=p;
   i--;
   while(q!=NULL)
   {
      q->data=a[i];
      q=q->next;
      i--;
   }


}
void reverse2(struct node *p)
{
   struct node *q=NULL,*r=NULL;
   while(p!=NULL)
   {
      r=q;
      q=p;
      p=p->next;
      q->next=r;

   }
   first=q;
}
void reverse3(struct node *q,struct node *p)
{
   if(p)
   {
      reverse3(p,p->next);
      p->next=q;
   }
   else
   first=q;
}


void concat(struct node *p,struct node *q)
{ 
   //third=p;
   while(p->next!=NULL)
   p=p->next;
   p->next=q;

}


void merge(struct node *p,struct node *q)
{
   struct node *last;
   if(p->data <q->data)
   {
     // third=last=p;
      p=p->next;
     // third->next=NULL;
   }
   else
   {
   // third=last=p;
      q=q->next;
    //  third->next=NULL;  
   }
   while(p&&q)
   {
      if(p->data <q->data)
      {
       last ->next=p;
       last=p;
       p=p->next;
       last->next=NULL;  
      }
      else{
         last ->next=q;
         last=q;
         q=q->next;
         last->next=NULL;

      }
   }
   if(p) last->next=p;
   if(q) last->next=q;
}
int isloop(struct node *f)
{
   struct node *p,*q;
   p=q=f;
   do
   {
      p=p->next;
      q=q->next;
      q=q?q->next:q;

   }
   while(p && q && p!=q);
   {
      if(p==q)
      return 1;
      else
      return 0;
   }
}
 int main ()
 {
   struct node *t1,*t2;
    int a[]={1,2,32,48,51};
    //int b[]={11,20,30,40,50};
    create(a,5);
   // create2(b,5);
      //display(first);
    // rdisplay(first);
    //printf("\n%d\n",sum(first));
    //printf("%d\n",count(first));
    //sum2(first);
    //max(first);
    //struct node *temp;
    //temp=lsearch(first,5);
    //if(temp)
    //printf("key is found %d\n",temp->data);
    //else
    //printf("key not found");
    //insert(first,0,8);
    //sortedinsert(first,15);
   //printf("deleter element %d\n", delete(first,4));
   //printf("%d\n",issorted(first));
   //reverse3(NULL,first);
    //display(first);
  // printf("first\n");
    //display(first);
    //printf("\n\n");

   // printf("second\n");
    //display(second);
   // printf("\n\n");


    //concat(second,first);
    //printf("concatinated\n");
    //merge(first,second);
    //display(third);
   // printf("\n\n");
   t1=first->next->next;
   t2=first->next->next->next->next;
   //t2->next=t1;
    printf("%d\n",isloop(first));

    return 0;
 }