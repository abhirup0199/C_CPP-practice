void insert_begin(int value)
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->val=value;
	temp->next=NULL;
    temp->prev=NULL;
	if(start==NULL)
		{
			start=temp;
		}
	else
		{
			temp->next = start;
            start = temp;
		}
}
void insert_anypoint(int value , int index)
{
    if (index == 0)
    {
        printf("There is no previous node available. \n");
        insert_begin(value);
        printf("The first node is added\n");
    }
    else
    {
        struct node *temp;
        temp = (struct node*)malloc(sizeof(struct node));
        temp->val = value;
        temp->next = NULL;
        temp->prev = NULL;
        if (start == NULL)
        {
            printf("There is no previous node available. \n");
            start = temp;
            printf("The first node is added\n");
        }
        else
        {
            int count = 0;
            struct node *m;
            m = start;
            while (count != (index-1) && m->next != NULL)
            {
                count++;
                m = m->next;
            }
            temp->next = m->next;
            m->next = temp;
            temp->next->prev = temp;
            temp->prev = m;
            printf("There is %d node available\n",count+1);
            printf("The node is added and connected with the previous point\n");
        }
    }
}