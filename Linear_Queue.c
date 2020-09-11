#include <stdio.h>
#include <stdlib.h>
#define N 50

int queue[N],front,rear;
 front=0;rear=-1;

int insertQ()
{
    int ele;

    if(rear==N-1)
    {
        printf("\nOverflow\n");
        return 0;
    }
     printf("\nEnter element to insert : \n");
     scanf("%d",&ele);

     rear++;
     queue[rear]=ele;
      printf("\n%d is inserted into queue\n",ele);
}

int deleteQ()
{
    int ele;

    if(front>rear)
    {
        printf("\nUnderflow\n");
        rear=-1;front=0;
        return 0;
    }
     ele=queue[front];
     front++;
      printf("\n%d is deleted from queue",ele);
}

 int displayQ()
{
    int i;

    if(front>rear)
    {
        printf("\nQueue is Empty\n");
        return 0;
    }
      printf("\nThe Queue status is ..\n");
      for(i=front;i<=rear;i++)
        printf("\n%d",queue[i]);
}


int main()
{
     int ch=0;
     front=0;rear=-1;

     while(ch<4)
     {
         printf("\nQueue Operations\n");
         printf("\n1.InsertQ\n");
          printf("\n2.DeleteQ\n");
           printf("\n3.DisplayQ\n");
            printf("\n4.Exit\n");
             printf("\nEnter your choice : \n");
             scanf("%d",&ch);

             switch(ch)
             {
                 case 1:insertQ();
                 break;

                 case 2:deleteQ();
                 break;

                 case 3:displayQ();
                 break;

                 case 4:printf("\nExiting..\n");
                 break;

             }
     }
    return 0;
}
