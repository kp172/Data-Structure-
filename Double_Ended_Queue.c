#include <stdio.h>
#include <stdlib.h>

int Q[5],front,rear,counter,x;
 front=0;rear=-1,counter=0;

int insertEnd()
{
    int ele;

    if(counter==5)
    {
        printf("\nOverflow\n");
        return 0;
    }
     printf("\nEnter element to insert : \n");
     scanf("%d",&ele);

     rear=(rear+1);
     Q[rear]=ele;
      printf("\n%d is inserted into Double Ended Queue at END\n",ele);
      counter++;
}

int deleteBegin()
{
    int ele;

    if(counter==0)
    {
        printf("\nUnderflow\n");
        rear=-1;front=0;
        return 0;
    }
     x=Q[front];
     front=(front+1);
      printf("\n%d is deleted from beginning",ele);
      counter--;
}

 int displayQ()
{
    int i;

    if(counter==0)
    {
        printf("\nDouble Ended Queue is Empty\n");
        return 0;
    }

    i=front;
    printf("\n");

    while(i<=rear)
    {
        printf("%d",Q[i]);
        i++;
    }
}

int insertBegin()
{
    int ele;

    if(counter==5)
    {
        printf("\nOverflow\n");
        return 0;
    }
     printf("\nEnter element to insert : \n");
     scanf("%d",&ele);

     x=rear;

     while(x>=front)
     {
         Q[x+1]=Q[x];
         x--;
     }

     rear++;
     Q[front]=ele;

     printf("\n%d is inserted from beginning",ele);
      counter++;
}

int deleteEnd()
{
        if(counter==0)
    {
        printf("\nUnderflow\n");
        rear=-1;front=0;
        return 0;
    }
     x=Q[rear];
     rear=(rear-1);
      printf("\n%d is deleted from END",x);
      counter--;
}

int main()
{
     int ch=1;
     front=0;rear=-1,counter=0;

     while(ch<<6)
     {
         printf("\nDouble Ended Queue Operations\n");
         printf("\n1.Insert End\n");
          printf("\n2.Delete Begin\n");
           printf("\n3.Display DEQ\n");
           printf("\n4.Insert Begin\n");
           printf("\n5.Delete End\n");
            printf("\n6.Exit\n");

             printf("\nEnter your choice : \n");
             scanf("%d",&ch);

             switch(ch)
             {
                 case 1:insertEnd();
                 break;

                 case 2:deleteBegin();
                 break;

                 case 3:displayQ();
                 break;

                 case 4:insertBegin();
                 break;

                 case 5:deleteEnd();
                 break;

                 case 6:printf("\nExiting..\n");
                 break;

             }
     }
    return 0;
}
