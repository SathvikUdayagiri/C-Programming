#include<stdio.h>
struct process
{
    int no;
    int at;
    int bt;
};

//fingin
int smallnumber(struct process p[],int n)
{
    int index = -1,lowestvalue=p[0].at;
    for(int i = 0; i < n; i++)
    {
        if(p[i].at < lowestvalue && p[i].at!=1000)
        {
            lowestvalue = p[i].at;
            index = i;
        }
    }
    p[index].at=1000;
    return index;
}


void main()
{
    int n,s;
    printf("enter no of processes:-");
    scanf("%d",&n);
    struct  process p[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter Arival Time of process %d :-",i+1);
        scanf("%d",p[i].at);
        printf("Enter Burst Time of process %d :-",i+1);
        scanf("%d",&p[i].bt);
        p[i].no=i+1;
    }

    for(int i=0;i<n;i++)
    {
 s=smallnumber(p,n);
    }
   
       
}