// 41. Write a program to implement a node structure for singly linked list. Read the 
// data in a node, print the node.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};
void creatNode(){
        struct node *first, *newnode, *temp;
    int n, i;

    printf("Enter number of nodes : ");
    scanf("%d", &n);

    first = NULL;

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
            temp = first;

            while(temp->link != NULL)
            {
                temp = temp->link;
            }

            temp->link = newnode;
        }
    }

    printf("Linked List : ");

    temp = first;

    while(temp != NULL)
    {
        printf("%d -> ", temp->info);
        temp = temp->link;
    }

    printf("NULL");
}
void main()
{
    creatNode();
}