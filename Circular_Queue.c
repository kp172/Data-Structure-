#include <stdio.h>
#include <stdlib.h>
#define N 50

int cqueue[N],front,rear,counter;
 front=0;rear=-1,counter=0;

int insertCQ()
{
    int ele;

    if(counter==N)
    {
        printf("\nOverflow\n");
        return 0;
    }
     printf("\nEnter element to insert : \n");
     scanf("%d",&ele);

     rear=(rear+1)%N;
     cqueue[rear]=ele;
      printf("\n%d is inserted into Circular Queue\n",ele);
      counter++;
}

int deleteCQ()
{
    int ele;

    if(counter==0)
    {
        printf("\nUnderflow\n");
        rear=-1;front=0;
        return 0;
    }
     ele=cqueue[front];
     front=(front+1)%N;
      printf("\n%d is deleted from Circular Queue",ele);
      counter--;
}

 int displayCQ()
{
    int i;

    if(counter==0)
    {
        printf("\nCircular Queue is Empty\n");
        return 0;
    }
      printf("\nCircular Queue status is ..\n");
      for(i=front;i!=rear;i=(i+1)%N)
        printf("\t%d",cqueue[i]);

printf("\t%d",cqueue[i]);
}


int main()
{
     int ch=0;
     front=0;rear=-1,counter=0;

     while(ch<4)
     {
         printf("\nCircular Queue Operations\n");
         printf("\n1.InsertCQ\n");
          printf("\n2.DeleteCQ\n");
           printf("\n3.DisplayCQ\n");
            printf("\n4.Exit\n");
             printf("\nEnter your choice : \n");
             scanf("%d",&ch);

             switch(ch)
             {
                 case 1:insertCQ();
                 break;

                 case 2:deleteCQ();
                 break;

                 case 3:displayCQ();
                 break;

                 case 4:printf("\nExiting..\n");
                 break;

             }
     }
    return 0;
}
