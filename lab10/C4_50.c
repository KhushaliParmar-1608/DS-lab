// 50. Write a program to swap two consecutive nodes in the linked list. Don’t change 
// the values of nodes, implement by changing the link of the nodes. 
//  Input: 1 → 2 → 3 → 4 → 5 → 6 → 7 → 8 
//  Output: 2 → 1 → 4 → 3 → 6 → 5 → 8 → 7

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

struct node* swapNode(struct node *first)
{
    struct node *prev = NULL;
    struct node *curr = first;
    struct node *next;

    if(first == NULL || first->link == NULL)
    {
        return first;
    }

    first = first->link;

    while(curr != NULL && curr->link != NULL)
    {
        next = curr->link;

        curr->link = next->link;
        next->link = curr;

        if(prev != NULL)
        {
            prev->link = next;
        }

        prev = curr;
        curr = curr->link;
    }

    return first;
}

int main()
{
    int n;
    struct node *first = NULL;

    printf("Enter the number of nodes : ");
    scanf("%d", &n);

    first = createNode(n);

    printf("Linked list before swapping : ");
    dispalyLinkedlist(first);

    first = swapNode(first);

    printf("\nLinked list after swapping : ");
    dispalyLinkedlist(first);

    return 0;
}