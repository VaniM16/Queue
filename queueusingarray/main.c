
#include <stdio.h>
 
void insert();
void delete();
void display();

int queue[100],ch,rear =-1,front =-1,n;
int main()
{
    printf("\n\t QUEUE IMPLEMENTATION USING ARRAY");
    printf("\n Enter the required size:");
    scanf("%d",&n);

    do
    {
        printf("1.INSERT \n");
        printf("2.DELETE \n");
        printf("3.DISPLAY \n");
        printf("4.EXIT \n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
             insert();
             break;
            case 2:
             delete();
             break;
            case 3:
             display();
             break;
            case 4:
             printf("Exit\n");
             break;
            default:
             printf("Invalid choice \n");
        } 
    }
    while(ch!=4);
    return 0;

} 
 
void insert()
{
    int x;
    if (rear == n - 1)
    printf("\n Queue Overflow");
    else
    {
        if (front ==-1)
        front = 0;
        printf("Enter the element: ");
        scanf("%d", &x);
        rear = rear+1;
        queue[rear]=x;
    }
} 
 
void delete()
{
    if (front==-1||front>rear)
    {
        printf("\n Queue Underflow");
        return ;
    }
    else
    {
        printf("Deleted element is: %d \n", queue[front]);
        front=front+1;
    }
} 
 
void display()
{
    int i;
    if(front==- 1)
        printf("\n Queue is Empty");
    else
    {
        printf("\n Queue is: \n");
        for (i=front;i<=rear;i++)
            printf("%d \t", queue[i]);
        printf("\n");
    }
}
