#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int Menu();
void Fourwheeler();
void Twowheeler();
void Threewheeler();
void Delete();
void ShowDetails();
void Deletefourwheeler();
void Deletetwowheeler();
void Deletethreewheeler();
int nor=0,nob=0,noc=0,amount=0,count=0;
//modify
struct link
{
    char vn[100];
    struct link *next;
};
typedef struct link node;

node *root = NULL;
int len;

void append()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    printf("Enter vehicle number: ");
    scanf("%s",temp->vn);
    temp->next = NULL;

    if (root == NULL) //list is empty
        root = temp;

    else
    {
        node *ptr;
        ptr = root;
        while (ptr->next != NULL)
        {
            ptr=ptr->next;
    }
     ptr->next=temp;
}

        }


int length()
{
    node *ptr = root;
    int ctr = 0;
    while (ptr != NULL)
    {
        ctr++;
        ptr = ptr->next;
    }

    return ctr;
}



void display()
{
    node *temp;
    temp = root;

    if(temp==NULL)
    printf("List is empty.\n");
    else
    {
        while(temp!=NULL)
        {
            printf("%s\n", temp->vn);
            temp = temp->next;
        }
    }
    printf("\n");
}


//modify

void main()
{
 while(1)
 {  system("cls");
   switch(Menu())
   {case 1:
         Fourwheeler();
         break;
    case 2:
         Twowheeler();
         break;
    case 3:
        Threewheeler();
        break;
    case 4:
         ShowDetails();
         break;
    case 5:
        Delete();
        break;
    case 6:
        Deletefourwheeler();
        break;
    case 7:
        Deletethreewheeler();
        break;
    case 8:
        Deletetwowheeler();
        break;
    case 11:
        exit(0);
    case 9:
        append();
        break;
    case 10:
        display();
        break;
    default:
    printf("invailid choice");
   }
   getch();
 }
}
int Menu()
{  int ch;
   printf("******WELCOME IN THE VEHICAL PARKING MANAGEMENT SYSTEM ******\n");
  printf("\n          1.Enter four wheeler       (charge Rs100)");
  printf("\n          2.Enter two wheeler        (charge Rs20)");
  printf("\n          3.Enter three wheeler       (charge Rs50)");
  printf("\n          4. Show details");
  printf("\n          5. Delete all privious data ");
  printf("\n          6. Delete a four wheeler entry ");
  printf("\n          7. Delete a three wheeler entry ");
  printf("\n          8. Delete a two wheeler entry ");
  printf("\n          9.Enter the vehicle number");
  printf("\n         10.Show the vehicle number");
  printf("\n         11.exit\n");
  printf("\n\n enter your choice number ");
  scanf("%d",&ch);
  return(ch);
}
void Delete()
{
  nob=0;
  noc=0;
  nor=0;
  amount=0;
  count=0;
  printf("deleted successfully");
}
void ShowDetails()
{
  printf("\n Number of four wheelers=%d",nob);
  printf("\n Number of two wheelers =%d",noc);
  printf("\n Number of three wheelers=%d",nor);
  printf("\n total number of vehicles=%d", count);
  printf("\n total gained amount =%d",amount);
}
void Threewheeler()
{
   printf(" entry successful");
   nor++;
   amount =amount+50;
   count++;
}
void Twowheeler()
{
  printf("entry successful");
  noc++;
  amount=amount+20;
  count++;

}
void Fourwheeler()
{
  printf("entry successful");
  nob++;
  amount=amount+100;
  count++;

}
void Deletefourwheeler()
{  nob--;
    count--;
    printf(" deleted successfuly");

}
void Deletetwowheeler()
{
    noc--;
    count--;
    printf("deleted successfully");

}
void Deletethreewheeler()
{
  nor--;
  count--;
  printf("deleted successfully");
}



