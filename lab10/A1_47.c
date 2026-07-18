// 47. Write a program to sort elements of a linked list. 

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

void main(){
    
    struct node *first = NULL;
    int n;

    printf("Enter the number of nodes you want to create : ");
    scanf("%d", &n);
    first = createNode(n);

    struct node *temp = first;
    for(int i = 0; i < n; i++)
    {
        struct node *temp1 = temp->link;
        for(int j = i + 1; j < n; j++)
        {
            if(temp->info > temp1->info)
            {
                int t = temp->info;
                temp->info = temp1->info;
                temp1->info = t;
            }
            temp1 = temp1->link;
        }
        temp = temp->link;
    }
    dispalyLinkedlist(first);
}