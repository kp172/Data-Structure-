#include <stdio.h>
#include <stdlib.h>
#define N 50

int stack[N],top;

int push()
{
    int ele;

    if(top==N-1)
    {
        printf("\nOverflow\n");
        return 0;
    }
     printf("\nEnter element to push : \n");
     scanf("%d",&ele);

     top++;
     stack[top]=ele;
      printf("\n%d is pushed into stack",ele);
}

int pop()
{
    int ele;

    if(top==-1)
    {
        printf("\nUnderflow\n");
        return 0;
    }
     ele=stack[top];
     top--;
      printf("\n%d is popped from stack",ele);
}

 int display()
{
    int i;

    if(top==-1)
    {
        printf("\nStack is Empty\n");
        return 0;
    }
      printf("\nThe Stack status is ..\n");
      for(i=top;i>=0;i--)
        printf("\n%d",stack[i]);
}


int main()
{
     int ch=0;
     top=-1;

     while(ch<4)
     {
         printf("\nStack Operations\n");
         printf("\n1.Push\n");
          printf("\n2.Pop\n");
           printf("\n3.Display\n");
            printf("\n4.Exit\n");
             printf("\nEnter your choice : \n");
             scanf("%d",&ch);

             switch(ch)
             {
                 case 1:push();
                 break;

                 case 2:pop();
                 break;

                 case 3:display();
                 break;

                 case 4:printf("\nExiting..\n");
                 break;

             }
     }
    return 0;
}

