// 43. WAP to check whether 2 singly linked lists are same or not.

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

void main()
{
    struct node *first1 = NULL;
    struct node *first2 = NULL;
    int n1, n2;

    printf("Enter the number of nodes for the first linked list : ");
    scanf("%d", &n1);
    first1 = createNode(n1);

    printf("Enter the number of nodes for the second linked list : ");
    scanf("%d", &n2);
    first2 = createNode(n2);

    // Function to check if two linked lists are same
    struct node *temp1 = first1;
    struct node *temp2 = first2;    

    while(temp1 != NULL && temp2 != NULL)
    {
        if(temp1->info != temp2->info)
        {
            printf("The two linked lists are not the same.\n");
            return;
        }
        temp1 = temp1->link;
        temp2 = temp2->link;
    }
    printf("The two linked lists are the same.\n");
}