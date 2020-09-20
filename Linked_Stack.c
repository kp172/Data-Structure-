#include <stdio.h>
#include <string.h>
#include <malloc.h>

struct node
{
    int info;
    struct node*link;
};

struct node * newnode,*first,*temp,*top;

int Push()
{
    newnode=malloc(sizeof(struct node));
    printf("\nEnter Info for new node : ");
    scanf("%d",&newnode->info);
    newnode->link=NULL;

    if(top==NULL)
    {
        first=newnode;
        return 0;
    }

    newnode->link=top;
    top=newnode;
    printf("\n%d is pushed into linked stack",newnode->info);
}

int Pop()
{
     if(top==NULL)
    {
       printf("\nLinked stack is empty\n");
        return 0;
    }

    temp=top;
    printf("\n%d is popped from linked stack",temp->info);
    top=temp->link;
    free(temp);
}

int Display()
{
    if(top==NULL)
    {
       printf("\nLinked stack is empty\n");
        return 0;
    }

    printf("\n\ntop ->");

    for(temp=top;temp!=NULL;temp=temp->link)
    {
        printf("\n         %d\n",temp->info);
    }
 return 0;
}

int main()
{
     int ch=0;
     top=-1;

     while(ch<4)
     {
         printf("\nLinked Stack Operations\n");
         printf("\n1.Push\n");
          printf("\n2.Pop\n");
           printf("\n3.Display\n");
            printf("\n4.Exit\n");
             printf("\nEnter your choice : \n");
             scanf("%d",&ch);

             switch(ch)
             {
                 case 1:Push();
                 break;

                 case 2:Pop();
                 break;

                 case 3:Display();
                 break;

                 case 4:printf("\nExiting..\n");
                 break;

             }
     }
    return 0;
}
