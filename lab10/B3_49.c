// 49. WAP to perform given operation in the linked list. There exist a Linked List. Add 
// a node that contains the GCD of those two nodes between every pair adjacent 
// node of Linked List.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

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

void dispalyLinkedlist(struct node *first)
{
    struct node *temp = first;

    if(temp == NULL)
    {
        printf("Linked List is Empty!");
        return;
    }

    while(temp != NULL)
    {
        printf("%d -> ", temp->info);
        temp = temp->link;
    }

    printf("NULL");
}

void addGCDNodes(struct node *first)
{
    struct node *temp = first, *newNode;
    int a, b, gcd;

    while(temp != NULL && temp->link != NULL)
    {
        a = temp->info;
        b = temp->link->info;

        // Calculate GCD
        int x = a, y = b;

        while(y != 0)
        {
            int r = x % y;
            x = y;
            y = r;
        }

        gcd = x;

        // Create new node
        newNode = (struct node *)malloc(sizeof(struct node));

        newNode->info = gcd;
        newNode->link = temp->link;

        // Insert node
        temp->link = newNode;

        // Move to next original node
        temp = newNode->link;
    }
}

int main()
{
    int n;
    struct node *first = NULL;

    printf("Enter the number of nodes : ");
    scanf("%d", &n);

    first = createNode(n);

    printf("\nLinked list before adding GCD nodes :\n");
    dispalyLinkedlist(first);

    addGCDNodes(first);

    printf("\n\nLinked list after adding GCD nodes :\n");
    dispalyLinkedlist(first);

    return 0;
}