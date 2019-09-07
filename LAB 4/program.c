#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>

struct node
{
  int data;
  struct node *next;
};

struct node *head = NULL;

void insert_at_beginning(int num)
{
  struct node *t;
  t = (struct node*) malloc (sizeof(struct node));
  if(head == NULL)
  {
    head=t;
    head->data=num;
    head->next=NULL;
  }
  else
  {
    t->data=num;
    t->next=head;
    head=t;
  }
}

void insert_at_end(int num)
{
  struct node *t,*temp;
  t = (struct node*) malloc (sizeof(struct node));
  if(head == NULL)
  {
    head=t;
    head->data=num;
    head->next=NULL;
  }
  else
  {
    temp=head;
    while(temp->next!=NULL)
    {
      temp=temp->next;
    }
    temp->next=t;
    t->data=num;
    t->next=NULL;
  }
}


void traverse()
{
  struct node *t;
  t=head;
  if(t==NULL)
  {
    printf("Linked List is Empty");
  }
  else
  {
    printf("Elements in Linked List are : ");
    while(t->next!=NULL)
    {
      printf("%d -> ",t->data);
      t=t->next;
    }
    printf("%d",t->data);
  }
}

void delete_from_beginning()
{
  struct node *t;
  if(head==NULL)
  {
    printf("Nothing to delete.\nLinked List is empty.");
  }
  else
  {
    printf("Deleted element is %d\n",head->data);
    t=head->next;
    free(head);
    head=t;
  }
}

void delete_from_end()
{
  struct node *t,*end_node;
  if(head==NULL)
  {
    printf("Nothing to delete.\nLinked List is empty.");
  }
  else if(head->next==NULL)
  {
    printf("Deleted element is %d\n",head->data);
    free(head);
    head=NULL;
  }
  else
  {
    t=head;
    while(t->next!=NULL)
    {
      end_node=t;
      t=t->next;
    }
      printf("Deleted element is %d\n",t->data);
      end_node->next=NULL;
      free(t);
  }
}


void wait()
{
  printf("\n\n");
  printf("Press ENTER to continue...");
  getchar();
  getchar();
}

int main()
{
  int choice;
  int element;
  int position;
  while(1)
  {
    system("clear");
    printf("                            LINKED LIST DATA STRUCTURE");
    printf("\n");
    printf("--------------------------------------------------------------------------------");
    printf("\n\n");
    printf("List of Operations :  1. Insert at Beginning\n");
    printf("                      2. Insert at End\n");
    printf("                      3. Delete from Beginning\n");
    printf("                      4. Delete from End\n");
    printf("                      5. Traverse\n");
    printf("                      0. Exit\n");
    printf("\n\n\n");
    printf("Enter the Number of Operation you want to perform : ");
    scanf("%d",&choice);
    printf("\n\n");

    switch(choice)
    {
      case 1:
        printf("Enter the number you want to insert : ");
        scanf("%d",&element);
        insert_at_beginning(element);
        traverse();
        wait();
        break;
      case 2:
        printf("Enter the number you want to insert : ");
        scanf("%d",&element);
        insert_at_end(element);
        traverse();
        wait();
        break;
      case 3:
        delete_from_beginning();
        traverse();
        wait();
        break;
      case 4:
        delete_from_end();
        traverse();
        wait();
        break;
      case 5:
        traverse();
        wait();
        break;
      case 0:
        wait();
        exit(0);
        break;
      default:
        printf("Wrong input....");
        printf("\n");
        wait();
    }
  }
  return 0;
}
