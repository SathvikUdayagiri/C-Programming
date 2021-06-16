/*
#include<stdio.h>
struct sname{
    int a,b,*p2;
};
int main()
{
    struct sname s1,*s2,*p1;
    s1.a=10;
    s1.b=20;
    s2=&s1;
    int *i=0;
    char *c=0;
    double *d=0;
    int *p;
    p=(int*)malloc(sizeof(int));
    *p=50;
    p1=(struct sname*)malloc(sizeof(struct sname));
    p1->a=100;
    p1->p2=&(p1->a);
    i++;
    c++;
    d++;
    printf("%d %d %d %d %d %d %d",i,c,d,s2->a,s2->b,
           p1->p2,*p);
}
*/
#include<stdio.h>
#include<stdlib.h>
void insert_beg(int n);
void delete_beg();
typedef struct node{
 int a;
 struct node *next;
}sn;
sn *head=NULL;
//typedef struct node sn;

void reverse()
{
    sn *nh=(sn*)malloc(sizeof(sn));
    sn*t=NULL;
    while(head!=NULL)
    {
        t=head;
        head=head->next;
        t->next=nh;
        nh=t;
    }
}

void delete_pos(int p)
{
    if(head==NULL)
    {

    }
    else if(p==1)
    {
        delete_beg();
    }
    else
    {
        sn*t=head;
        for(int i=2;i<p;i++)
        {
            t=t->next;
            if(t==NULL)
            {
                //return head;
            }
        }
        if(t->next==NULL)
        {
            //return head;
        }
        sn*temp=t->next;
        t->next=temp->next;
        free(temp);
    }
}

void delete_end()
{
    if(head==NULL)
    {

    }
    else if(head->next==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        sn*t=head;
        while(t->next->next!=NULL)
        {
            t=t->next;
        }
        sn*temp=t->next;
        t->next=NULL;
        free(temp);
    }
}

void delete_beg()
{
    if(head==NULL)
    {

    }
    else
    {
        sn*t=head;
        head=head->next;
        free(t);
    }
}

void insert_pos(int n,int p)
{
    int c=0;
    sn *nn=(sn*)malloc(sizeof(sn));
    nn->a=n;
    nn->next=NULL;
    if(p==1)
    {
        insert_beg(n);
    }
    else
    {
        if(head==NULL)return;
        sn*t=head;
        for(int i=2;i<p;i++)
        {
            t=t->next;
            if(t==NULL)return;
        }
        nn->next=t->next;
        t->next=nn;
    }

}

void insert_end(int n)
{
    sn *nn=(sn*)malloc(sizeof(sn));
    nn->a=n;
    nn->next=NULL;
     if(head==NULL)
   {
       head=nn;
   }
   else{
       sn* t;
       t=head;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=nn;
    }

}
void insert_beg(int n)
{
   sn *nn=(sn*)malloc(sizeof(sn));
   nn->a=n;
   nn->next=NULL;
   if(head==NULL)
   {
       head=nn;
   }
   else{
    nn->next=head;
    head=nn;
   }
}
void disply()
{
    sn* t=head;
    while(t!=NULL)
    {
        printf("%d->",t->a);
        t=t->next;
    }
}
int main()
{
    int n,m,m2,p,opt,fopt,opt2;
    while(1)
    {
            printf("enter the first option 1.insert 2.delete: 3.Exit");
            scanf("%d",&fopt);
            if(fopt==1)
            {
                printf("enter how many numbers you want to enter:-");
                scanf("%d",&m);
                for(int i=0;i<m;i++)
                {
                    printf("enter the operations 1.insert begening 2.insert ending 3.insert at a position:-");
                    scanf("%d",&opt);
                    switch(opt)
                    {
                        case 1:
                            printf("enter a number to insert at begening");
                            scanf("%d",&n);
                            insert_beg(n);
                            break;
                        case 2:
                            printf("enter a number to insert at ending: ");
                            scanf("%d",&n);
                            insert_end(n);
                            break;
                        case 3:
                            printf("enter a number and position to insert at a position:-");
                            scanf("%d%d",&n,&p);
                            insert_pos(n,p);
                            break;
                    }
                    //disply();
                }
            }
            else if(fopt==2)
            {
                printf("enter how many numbers you want to delete:-");
                scanf("%d",&m2);
                for(int i=0;i<m2;i++)
                {
                    printf("enter the operations 1.delete begening 2.delete ending 3.delete at a position:-");
                    scanf("%d",&opt2);
                    switch(opt2)
                    {
                        case 1:
                            delete_beg();
                            break;
                        case 2:
                            delete_end();
                            break;
                        case 3:
                            printf("enter the position to delete:");
                            scanf("%d",&p);
                            delete_pos(p);
                            break;
                    }
                    //disply();
            }


          }
          else if(fopt==3)
          {
              exit(0);
          }
          disply();
    }

}
