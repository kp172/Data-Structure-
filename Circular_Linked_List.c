#include <stdio.h>
#include <string.h>
#include <malloc.h>

struct node
{
    int info;
    struct node*link;
};

struct node * newnode,*first,*temp,*s;

int createCLL()
{
    if(first !=NULL)
    {
        printf("\n Circular List is already created\n");
        return 0;
    }

    newnode=malloc(sizeof(struct node));
    printf("\nEnter Info for new node : ");
    scanf("%d",&newnode->info);
    newnode->link=NULL;
    first=newnode;
    first->link=first;
    printf("\nCircular List is now created");
}

int insertCLL()
{
    if(first !=NULL)
    {
        printf("\n Circular List is empty\n");
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
    newnode->link=first;
    first=newnode;
    temp->link=first;
    printf("\nNew Node is inserted\n");
}

int deleteCLL()
{
    if(first !=NULL)
    {
        printf("\nCircular List is empty\n");
        return 0;
    }

   s=first;
   printf("\n%d is deleted",s->info);

   temp=first;
   while(temp->link!=first)
   {
       temp=temp->link;
   }

   first=first->link;
   temp->link=first;
    free(s);
}

int displayCLL()
{
    if(first !=NULL)
    {
        printf("\nCircular List is empty\n");
        return 0;
    }

   printf("n\nfirst ->");

   for(temp=first;temp->link!=first;temp=temp->link)
   {
       printf("%d",temp->info);
   }
   printf("%d ->",temp->info);

   printf("NULL");
}

int main()
{
     int ch=0;

     while(ch<5)
     {
         printf("\nCircular Lined List Operations\n");
         printf("\n1.Create CLL\n");
         printf("\n2.Insert CLL\n");
          printf("\n3.Delete CLL\n");
           printf("\n4.Display CLL\n");
            printf("\n5.Exit\n");
             printf("\nEnter your choice : \n");
             scanf("%d",&ch);

             switch(ch)
             {
                 case 1:createCLL();
                 break;

                 case 2:insertCLL();
                 break;

                 case 3:deleteCLL();
                 break;

                 case 4:displayCLL();
                 break;

                 case 5:printf("\nExiting..\n");
                 break;

             }
     }
    return 0;
}
