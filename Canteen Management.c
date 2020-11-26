#include<stdio.h>
#include<stdlib.h>

int QTY1=10,QTY2=10,QTY3=10,QTY4=10,QTY5=10,QTY6=10,QTY7=10,QTY8=10,QTY9=10;

struct node
{
int info;
struct node*link;
};

typedef struct node*NODE;
NODE start=NULL;

NODE getnode()
{
NODE x;
x=(NODE)malloc(sizeof(struct node));
return x;
}

void insertatbeg(int item)
{

    NODE temp;
    temp=getnode();
    temp->info=item;
    temp->link=start;
    start=temp;
}



void delatval(int value)
{
    NODE loc,locp;
    int count;
    if(start==NULL)
    {
        printf("List is empty");
    }
    else
    {
        loc=start->link;
        locp=start;
        count=1;
    }
    if(loc->info==value)
        free(loc);
    else
    {
        while(count!=1)
        {
            locp=loc;
            loc=loc->info;
            count++;
        }
        if(loc->info==value)
            free(loc);
        }
}


void qty(int total)
{
    int quantity,price,sum=0;
    NODE p;
    p=start;
    if(p==NULL)
        return 0;
    else
    {
        while(p!=NULL)
        {
            if(p->info==1)
            {
               price=10;
               printf("\nAvailable quantity is %d\nEnter quantity\n",QTY1);
               scanf("%d",&quantity);
               total=price*quantity;
               printf("Total:%d\n",total);
               QTY1=QTY1-quantity;
               break;
            }
            else if(p->info==2)
            {
               price=10;
               printf("\nAvailable quantity is %d\nEnter quantity\n",QTY2);
               scanf("%d",&quantity);
               total=price*quantity;
               printf("Total:%d\n",total);
               QTY2=QTY2-quantity;
               break;
            }
             else if(p->info==3)
             {
                 price=15;
                 printf("Available quantity is %d\nEnter quantity\n",QTY3);
                 scanf("%d",&quantity);
                 total=price*quantity;
                 printf("Total:%d",total);
                 QTY3=QTY3-quantity;
                 break;
             }
             else if(p->info==4)
             {
                 price=20;
                 printf("Available quantity is %d\nEnter quantity\n",QTY4);
                 scanf("%d",&quantity);
                 total=price*quantity;
                 printf("Total:%d",total);
                 QTY4=QTY4-quantity;
                 break;
             }
             else if(p->info==5)
             {
               price=10;
               printf("\nAvailable quantity is %d\nEnter quantity\n",QTY5);
               scanf("%d",&quantity);
               total=price*quantity;
               printf("Total:%d\n",total);
               QTY5=QTY5-quantity;
               break;
             }
             else if(p->info==6)
             {
               price=10;
               printf("\nAvailable quantity is %d\nEnter quantity\n",QTY6);
               scanf("%d",&quantity);
               total=price*quantity;
               printf("Total:%d\n",total);
               QTY6=QTY6-quantity;
               break;
             }
             else if(p->info==7)
             {
               price=10;
               printf("\nAvailable quantity is %d\nEnter quantity\n",QTY7);
               scanf("%d",&quantity);
               total=price*quantity;
               printf("Total:%d\n",total);
               QTY7=QTY7-quantity;
               break;
             }
             else if(p->info==8)
             {
                 price =50;
                 printf("Available quantity is %d\nEnter quantity\n",QTY8);
                 scanf("%d",&quantity);
                 total=price*quantity;
                 printf("Total:%d",total);
                 QTY8=QTY8-quantity;
                 break;
            }
            else if(p->info==9)
            {
                 price =50;
                 printf("Available quantity is %d\nEnter quantity\n",QTY9);
                 scanf("%d",&quantity);
                 total=price*quantity;
                 printf("Total:%d",total);
                 QTY9=QTY9-quantity;
                 break;
            }
            p=p->link;
            break;
        }
    }

}


void display()
{

    NODE ptr;
    ptr=start;

    if(ptr==NULL)
        printf("list is empty");
    else
    {
        while(ptr!=NULL)
        {
            {

            if(ptr->info==1)
            printf("%d. Samosa  \n",ptr->info);

           else if(ptr->info==2)
            printf("%d. Chips \n",ptr->info);

           else if(ptr->info==3)
            printf("%d. Puffs \n",ptr->info);

           else if(ptr->info==4)
            printf("%d. Cake \n",ptr->info);

           else if(ptr->info==5)
            printf("%d. Coffee \n",ptr->info);

           else if(ptr->info==6)
            printf("%d. Tea \n",ptr->info);

           else if(ptr->info==7)
            printf("%d. Juice \n",ptr->info);

           else if(ptr->info==8)
            printf("%d. South India Meals \n",ptr->info);

           else if(ptr->info==9)
            printf("%d. North Indian Meals \n",ptr->info);
            }
            ptr=ptr->link;

        }
    }
}


void main()
{
    int n,item,i,value,a,quantity,total=0;
    printf("AVAILABLE ITEMS ARE\n");
    snacks();
    drinks();
    meals();
    printf("\n1-Add items");
    printf("\n2-Delete items");
    printf("\n3-Display items");
    printf("\n4-Proceed to billing");
    printf("\n\n* * * * * * * * * * * * *");

    do
    {
        printf("\n\nChoose an option");
        scanf("%d",&a);
        switch(a)
        {
            case 1: printf("Insert food number\t");
                    scanf("%d",&item);
                    insertatbeg(item);
                    qty(total);
                    break;
            case 2: printf("Enter food number to be deleted\t");
                    scanf("%d",&value);
                    delatval(value);
                    break;
            case 3: printf("******************************************************\n");
                    printf("ORDERED ITEMS ARE \n");
                    display();
                    break;

        }
    }while(a !=4);

    int arr[20],b[20],price;

        printf("Enter total number of items chosen\n");
        scanf("%d",&n);
        printf("\nEnter item code and quantity for confirmation\n ");

       for(i=0;i<n;i++)
       {

           printf("\nITEM CODE\t");
           scanf("%d",&arr[i]);
           printf("QUANTITY\t");
           scanf("%d",&b[i]);

       }

        for(i=0;i<n;i++)
        {

        if(arr[i]==1|| arr[i]==2 || arr[i]==5 || arr[i]==6 || arr[i]==7)
        {
            price=10;

        }

        else if(arr[i]==3)
        {
            price=15;
        }
        else if(arr[i]==4)
        {
            price=20;
        }
        else if(arr[i]==8 || arr[i]==9)
        {
            price=50;
        }
         total=total+(price*b[i]);
        }


    printf("\n\n***************************");
    printf("\nTOTAL BILL : %d",total);
    printf("\n***************************\n\n");

    return 0;
}


 void snacks()
 {
   printf("\n@@@@@@@@@@@@@@@@@@@@@@@@\n");
   printf("\nSNACKS\t\tPRICE\n-------\t\t-----\n1.Samosa\t10\n2.Chips\t\t10\n3.Puffs\t\t15\n4.Cake\t\t20\n");
 }

 void drinks()
 {
     printf("\nDRINKS\t\tPRICE\n-------\t\t-----\n5.Coffee\t10\n6.Tea\t\t10\n7.Juice\t\t10\n");
 }

 void meals()
 {
     printf("\nMEALS\t\tPRICE\n------\t\t-----\n8.South Indian \t50\n9.North Indian \t50\n");
     printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@\n");
 }
