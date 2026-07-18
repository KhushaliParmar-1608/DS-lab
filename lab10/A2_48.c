// 48. WAP to swap Kth node from beginning with Kth node from end in a singly linked 
// list.

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
struct node* swapKthNode(struct node *first, int k)
{
    struct node *curr1 = first, *curr2 = first;
    struct node *prev1 = NULL, *prev2 = NULL;
    struct node *temp;
    int count = 0, i;

    // Count total nodes
    temp = first;
    while(temp != NULL)
    {
        count++;
        temp = temp->link;
    }

    // Invalid k
    if(k > count || k <= 0)
    {
        printf("Invalid Position");
        return first;
    }

    // Same node
    if((2 * k - 1) == count)
    {
        return first;
    }

    // Find kth node from beginning
    for(i = 1; i < k; i++)
    {
        prev1 = curr1;
        curr1 = curr1->link;
    }

    // Find kth node from end
    for(i = 1; i < count - k + 1; i++)
    {
        prev2 = curr2;
        curr2 = curr2->link;
    }

    // Change previous links
    if(prev1 != NULL)
        prev1->link = curr2;
    else
        first = curr2;

    if(prev2 != NULL)
        prev2->link = curr1;
    else
        first = curr1;

    // Swap next pointers
    temp = curr1->link;
    curr1->link = curr2->link;
    curr2->link = temp;

    return first;
}

void main(){
    int n, k;
    struct node *first = NULL;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);
    printf("Enter the value of k : ");
    scanf("%d", &k);

    first = createNode(n);
    printf("Linked list before swapping : ");
    dispalyLinkedlist(first);
    printf("\n");

    first = swapKthNode(first, k);
    printf("Linked list after swapping : ");
    dispalyLinkedlist(first);

}