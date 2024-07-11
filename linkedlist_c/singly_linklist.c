//singly linklist all functions
#include<stdio.h>
#include<stdlib.h>

//structure for creating a list
typedef struct list{
    int data;
    struct list *next;
}node;

node *start = NULL;

//function to create new node
node* createnode(int value)
{
    node *temp = (node*)malloc(sizeof(node));
    temp->data = value;
    temp->next = NULL;
    return temp;
}

//function to insert new node at beginning of list
void insert_begin(int value){
    node *newnode = createnode(value);
    if(start == NULL)
    {
        start = newnode;
    }
    else
    {
        newnode->next = start;
        start = newnode;
    }
}

//function to insert new node at end of list
void insert_end(int value){
    node *newnode = createnode(value);
    if(start == NULL)
    {
        start = newnode;
        printf("---No Previous Node is Available---\n");
        printf("---Your First Node is Added---\n");
    }
    else
    {
        node *temp = start;
        while(temp->next!= NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        printf("---Your Node is Added at The End of The List---\n");
    }
}

//function to insert new node at any index of list
void insert_any(int value, int index)
{
    if(index == 0)
    {
        printf("---Your First Node is Added---\n");
        insert_begin(value);
    }
    else if(index != 0 && start == NULL)
    {
        printf("---No Previous Node is Available---\n");
        printf("---Your First Node is Added---\n");
        node *newnode = createnode(value);
        start = newnode;
    }
    else
    {
        node *newnode = createnode(value);
        node *temp = start;
        int count = 0;
        while(count != (index-1) && temp->next != NULL)
        {
            temp = temp->next;
            count++;
        }
        if(count == (index-1))
        {
            printf("---Your Node is Added---\n");
            newnode->next = temp->next;
            temp->next = newnode;
        }
        else if(temp->next == NULL)
        {
            printf("---Wrong Index is Given---\n");
            temp->next = newnode;
            printf("---Your Node is Added at The End of The List---\n");
        }
    }
}

//function to delete node at beginning of list
void delete_begin()
{
    if(start == NULL)
    {
        printf("---No Previous Node is Available---\n");
    }
    else
    {
        node *temp = start;
        start = start->next;
        printf("---Your Node is Deleted---\n");
        free(temp);
    }
}

//function to delete node at end of list
void delete_end()
{
    if(start == NULL)
    {
        printf("---No Previous Node is Available---\n");
    }
    else
    {
        node *temp = start;
        node *m;
        if(temp->next == NULL)
        {
            printf("---Your Node is Deleted---\n");
            free(temp);
        }
        else
        {
            while(temp->next!= NULL)
            {
                m = temp;
                temp = temp->next;
            }
            m->next = NULL;
            printf("---Your Node is Deleted---\n");
            free(temp);
        }
    }
}

//function to delete node at any index of list

void delete_any(int index)
{
    if(start == NULL)
    {
        printf("---No Previous Node is Available---\n");
    }
    else if(index == 0)
    {
        printf("---Your First Node is Deleted---\n");
        delete_begin();
    }
    else
    {
        node *temp = start;
        node *m;
        int count = 0;
        while(count!= (index-1) && temp->next!= NULL)
        {
            temp = temp->next;
            count++;
        }
        if(count!= (index-1))
        {
            printf("---Your Node is Deleted---\n");
            m = temp->next;
            temp->next = m->next;
            free(m);
        }
        else if(temp->next == NULL)
        {
            printf("---Wrong Index is Given---\n");
        }
    }
}

//function to delete entire linklist
void delete_all()
{
    if(start == NULL)
    {
        printf("---No Previous Node is Available---\n");
    }
    else
    {
        node *temp = start;
        node *m;
        while(temp->next!= NULL)
        {
            m = temp;
            temp = temp->next;
            free(m);
        }
        free(temp);
        start = NULL;
        printf("---Whole List is Deleted---\n");
    }
}

//function to display entire linklist
void display()
{
    if(start == NULL)
    {
        printf("---No Previous Node is Available---\n");
    }
    else
    {
        node *temp = start;
        while(temp->next!= NULL)
        {
            printf("%d\n",temp->data);
            temp = temp->next;
        }
        printf("%d\n",temp->data);
    }
}

//A menu driven main function using switch case to execute all functions

int main()
{
    int choice , input , index;
    for(int i=1 ; i > 0 ; i++)
    {
        printf("---------------------------\n");
        printf("----------M E N U----------\n");
        printf("---------------------------\n");
        printf("1. Inser At Any Point\n(Use Index 0 to Inser At Begin)\n2. Inser At End\n3.Delete At Any Point\n(Use Index 0 to Delete At Begin)\n4.Delete At End\n5.Delete All\n6.Display\n7.Exit\n");
        printf("Enter Your choice ----------\t");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("---Enter the value to be inserted---\n");
                scanf("%d",&input);
                printf("---Enter the Index---\n");
                scanf("%d",&index);
                insert_any(input,index);
                break;
            case 2:
                printf("---Enter the value to be inserted---\n");
                scanf("%d",&input);
                insert_end(input);
                break;
            case 3:
                printf("---Enter the Index---\n");
                scanf("%d",&index);
                delete_any(index);
                break;
            case 4:
                delete_end();
                break;
            case 5:
                delete_all();
                break;
            case 6:
                display();
                break;
            case 7:
                exit(0);
                break;
            default:
                printf("Wrong Choice\n");
                break;
        }
    }
}