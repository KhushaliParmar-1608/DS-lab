#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

// Create Node Function
struct node *createNode(struct node *first)
{
    struct node *newnode, *save;
    int n, i;

    printf("Enter number of nodes : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter info : ");
        scanf("%d", &newnode->info);

        newnode->link = NULL;

        if(first == NULL)
        {
            first = newnode;
        }
        else
        {
            save = first;

            while(save->link != NULL)
            {
                save = save->link;
            }

            save->link = newnode;
        }
    }

    return first;
}

// Display Function
void displayNode(struct node *first)
{
    struct node *save;

    if(first == NULL)
    {
        printf("Linked List is Empty.");
        return;
    }

    save = first;

    printf("Linked List : ");

    while(save != NULL)
    {
        printf("%d -> ", save->info);
        save = save->link;
    }

    printf("NULL");
}

void main()
{
    struct node *first = NULL;

    first = createNode(first);

    displayNode(first);
}