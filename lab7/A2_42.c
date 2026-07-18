// 42. Write a menu driven program to implement following operations on the singly 
// linked list.  
//  Insert a node at the front of the linked list. 
//  Display all nodes. 
//  Delete a first node of the linked list. 
//  Insert a node at the end of the linked list. 
//  Delete a last node of the linked list. 
//  Delete a node from specified position. 
//  Count the no. of nodes in the linked list. 

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

//create a linked list
struct node* createNode(int n)
{
    struct node *new, *save, *first = NULL;

    if(n <= 0)
    {
        return NULL;
    }

    for(int i = 1; i <= n; i++)
    {
        new = (struct node *)malloc(sizeof(struct node));

        printf("Enter the info part of node : ");
        scanf("%d", &new->info);

        new->link = NULL;

        if(first == NULL)
        {
            first = new;
            save = new;
        }
        else
        {
            save->link = new;
            save = new;
        }
    }

    return first;
}

//display the linked list
void dispalyLinkedlist(struct node *first)
{
    struct node *temp = first;

    if(temp == NULL)
    {
        printf("Linked list is empty !");
        return;
    }

    while(temp != NULL)
    {
        printf("%d -> ", temp->info);
        temp = temp->link;
    }

    printf("NULL");
}

//insert a node at the front of the linked list
void insertAtFrist(struct node *first, int x)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));

    new->info = x;
    new->link = first;
    new = first;

}

//delete a first node of the linked list
void deleteFirstNode(struct node *first)
{
    struct node *temp = first;
    first = first->link;
    free(temp);
}

//insert a node at the end of the linked list
void insertAtEnd(struct node *first, int x)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    struct node *temp = first;

    new->info = x;
    new->link = NULL;

    while(temp->link != NULL)
    {
        temp = temp->link;
    }

    temp->link = new;
}

//delete a last node of the linked list
void deleteLastNode(struct node *first)
{
    struct node *temp = first;
    struct node *prev = NULL;

    while(temp->link != NULL)
    {
        prev = temp;
        temp = temp->link;
    }

    prev->link = NULL;
    free(temp);
}

//delete a node from specified position
void deleteNodeAtPosition(struct node *first, int pos)
{
    struct node *temp = first;
    struct node *prev = NULL;

    if(pos == 1)
    {
        first = first->link;
        free(temp);
        return;
    }

    for(int i = 1; i < pos; i++)
    {
        prev = temp;
        temp = temp->link;
    }

    prev->link = temp->link;
    free(temp);
}
int main()
{
    struct node *first = NULL;
    int n;
    printf("Enter the number of nodes you want to create : ");
    scanf("%d", &n);

    int choice, x, pos;
    first = createNode(n);
    printf("Enter your choice : \n1. Insert a node at the front of the linked list. \n2. Display all nodes. \n3. Delete a first node of the linked list. \n4. Insert a node at the end of the linked list. \n5. Delete a last node of the linked list. \n6. Delete a node from specified position. \n7. Count the no. of nodes in the linked list.\n");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter the value you want to insert at the front : ");
        scanf("%d", &x);
        insertAtFrist(first, x);
        printf("Node inserted at the front successfully !");
    }
    else if(choice == 2)
    {
        dispalyLinkedlist(first);
    }
    else if(choice == 3)
    {
        deleteFirstNode(first);
        printf("First node deleted successfully !");
    }
    else if(choice == 4)
    {
        printf("Enter the value you want to insert at the end : ");
        scanf("%d", &x);
        insertAtEnd(first, x);
        printf("Node inserted at the end successfully !");
    }
    else if(choice == 5)
    {
        deleteLastNode(first);
        printf("Last node deleted successfully !");
    }
    else if(choice == 6)
    {
        printf("Enter the position of node you want to delete : ");
        scanf("%d", &pos);
        deleteNodeAtPosition(first, pos);
        printf("Node deleted from the specified position successfully !");
    }
    else if(choice == 7)
    {
        int count = 0;
        struct node *temp = first;
        while(temp != NULL)
        {
            count++;
            temp = temp->link;
        }
        printf("Number of nodes in the linked list : %d", count);
    }
    else
    {
        printf("Invalid choice !");
    }
}