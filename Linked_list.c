#include <stdio.h>
#include <string.h>
#include <malloc.h>

struct node
{
    int info;
    struct node*link;
};

struct node * newnode,*first,*temp,*s;

int createSLL()
{
    if(first !=NULL)
    {
        printf("\nList is already created\n");
        return 0;
    }

    newnode=malloc(sizeof(struct node));
    printf("\nEnter Info for new node : ");
    scanf("%d",&newnode->info);
    newnode->link=NULL;
    first=newnode;
    printf("\nList is now created");
}

int AddBegin()
{
    if(first !=NULL)
    {
        printf("\nList is empty\n");
        return 0;
    }

    newnode=malloc(sizeof(struct node));
    printf("\nEnter Info for new node : ");
    scanf("%d",&newnode->info);
    newnode->link=NULL;
    newnode->link=first;
    first=newnode;
    printf("\nNew Node is added at beginning\n");
}

int AddLast()
{
    if(first !=NULL)
    {
        printf("\nList is empty\n");
        return 0;
    }

    newnode=malloc(sizeof(struct node));
    printf("\nEnter Info for new node : ");
    scanf("%d",&newnode->info);
    newnode->link=NULL;
   temp=first;

   while(temp->link!=NULL)
   {
       temp=temp->link;
   }

   temp->link=newnode;
    printf("\nNew Node is added at end\n");
}

int DelFirst()
{
    if(first !=NULL)
    {
        printf("\nList is empty\n");
        return 0;
    }

    temp=first;
    first=first->link;
    printf("\n%d is deleted\n",temp->info);
    free(temp);
}

int DelLast()
{
    if(first !=NULL)
    {
        printf("\nList is empty\n");
        return 0;
    }

    temp=first;
     while(temp->link!=NULL)
   {
       s=temp;
       temp=temp->link;
   }
   s->link=NULL;
    printf("\n%d is deleted\n",temp->info);
    free(temp);
}


int main()
{
     int ch=0;

     while(ch<6)
     {
         printf("\nSingly linked list Operations\n");
         printf("\n1.create SLL\n");
          printf("\n2.Add Begin\n");
           printf("\n3.Add Last\n");
            printf("\n4.Delete First\n");
             printf("\n5.Delete Last\n");
              printf("\n6.Exit\n");
             printf("\nEnter your choice : \n");
             scanf("%d",&ch);

             switch(ch)
             {
                 case 1:createSLL();
                 break;

                 case 2:AddBegin();
                 break;

                 case 3:AddLast();
                 break;

                    case 4:DelFirst();
                 break;

                    case 5:DelLast();
                 break;

                 case 6:printf("\nExiting..\n");
                 break;

             }
     }
    return 0;
}
