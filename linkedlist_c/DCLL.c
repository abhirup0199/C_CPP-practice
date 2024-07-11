#include <stdio.h>
#include <stdlib.h>
typedef struct d_list
{
	int data;
	struct d_list * prev;
	struct d_list * next;
}node;

node * head=NULL;

node * createNode()
{
	node * tmp;
	tmp=(node *)malloc(sizeof(node));
	return tmp;
}

void Insert_at_beginning(int data)
{
	node * newnode=createNode();
	newnode->data=data;
	newnode->next=NULL;
	newnode->prev=NULL;
	if (head==NULL)
	{
		head=newnode;
		head->next=head;
		head->prev=head;
	}
	else
	{
		newnode->next=head;
		head->prev=newnode;
		node * tmp;
		tmp=head;
		while (tmp->next!=head)
		{
			tmp=tmp->next;
		}
		head=newnode;
		tmp->next=head;
		head->prev=tmp;
	}
}

void Insert_at_end(int data)
{
	node * newnode=createNode();
	newnode->data=data;
	newnode->next=NULL;
	newnode->prev=NULL;
	if (head==NULL)
	{
		head=newnode;
		head->next=head;
		head->prev=head;
	}
	else
	{
		node * tmp;
		tmp=head;
		while(tmp->next!=head)
		{
			tmp=tmp->next;
		}
		tmp->next=newnode;
		newnode->prev=tmp;
		newnode->next=head;
		head->prev=newnode;
	}
}

node * Insert_Before(int data,int before)
{
	node * newnode=createNode();
	newnode->data=data;
	newnode->prev=NULL;
	newnode->next=NULL;
	if (head==NULL)
	{
		printf("The linked list is already empty\n");
		return head;
	}
	else if (head->data==before)
	{
		node * tmp;
		tmp=head;
		newnode->next=tmp;
		tmp->prev=newnode;
		while (tmp->next!=head)
		{
			tmp=tmp->next;
		}
		head=newnode;
		tmp->next=head;
		head->prev=tmp;
	}
	else
	{
		node * tmp;
		node * prev1;
		tmp=head;
		prev1=head;
		while (tmp->next!=head && tmp->data!=before)
		{
			prev1=tmp;
			tmp=tmp->next;
		}
		if (tmp->data!=before)
		{
			printf("%d element is not present in any of the nodes! Sorry !\n",before);
		}
		else
		{
			newnode->next=tmp;
			tmp->prev=newnode;
			prev1->next=newnode;
			newnode->prev=prev1;
		}
	}
}

node * Insert_After(int data,int after)
{
	node * newnode=createNode();
	newnode->data=data;
	newnode->next=NULL;
	newnode->prev=NULL;
	if (head==NULL)
	{
		printf("The linked list is already empty\n");
		return head;
	}
	else
	{
		node * tmp;
		tmp=head;
		while (tmp->next!=head && tmp->data!=after)
		{
			tmp=tmp->next;
		}
		if (tmp->data!=after)
		{
			printf("%d element is not present in any of the nodes! Sorry !\n",after);
		}
		else
		{
			newnode->next=tmp->next;
			newnode->prev=tmp;
			tmp->next->prev=newnode;
			tmp->next=newnode;
		}
	}
}

node * Insert_Nth_Position(int data,int position)
{
	int c=1;
	node * newnode=createNode();
	newnode->data=data;
	newnode->next=NULL;
	newnode->prev=NULL;
	if (head==NULL)
	{
		printf("The linked list is already empty\n");
		return head;
	}
	else if (position==1)
	{
		node * tmp;
		tmp=head;
		newnode->next=tmp;
		tmp->prev=newnode;
		while (tmp->next!=head)
		{
			tmp=tmp->next;
		}
		head=newnode;
		tmp->next=head;
		head->prev=tmp;
	}
	else
	{
		node * tmp;
		node * prev1;
		tmp=head;
		prev1=head;
		while (tmp->next!=head && c<position)
		{
			c++;
			prev1=tmp;
			tmp=tmp->next;
		}
		if (c!=position)
		{
			printf("No nodes are present at %dth position in the linked list! Sorry!\n",position);
		}
		else
		{
			newnode->next=tmp;
			newnode->prev=prev1;
			tmp->prev=newnode;
			prev1->next=newnode;
		}
	}
}

node * Del_Start()
{
	if (head==NULL)
	{
		printf("The linked List is already empty\n");
		return head;
	}
	else if (head->next==head)
	{
		free(head);
		head=NULL;
	}
	else
	{
		node * tmp;
		node * b;
		b=head;
		tmp=head;
		head=tmp->next;
		if (head!=b)
		{
			while (tmp->next!=b)
			{
				tmp=tmp->next;
			}
			tmp->next=head;
			head->prev=tmp;
			free(b);
			
		}
		else
		{
			
			free(tmp);
		}
	}
}

node * Del_End()
{
	if (head==NULL)
	{
		printf("The linked list is already empty\n");
		return head;
	}
	if (head->next==head)
	{
		free(head);
		head==NULL;
	}
	else
	{
		node * tmp;
		node * prev1;
		prev1=head;
		tmp=head;
		while(tmp->next!=head)
		{
			prev1=tmp;
			tmp=tmp->next;
		}
		prev1->next=head;
		head->prev=prev1;
		free(tmp);
	}
}

node * Del_Before(int before)
{
	node * tmp;
	node * b;
	node * prev1;
	if (head==NULL)
	{
		printf("The linked list is already empty\n");
		return head;
	}
	else if (head->data==before)
	{
		printf("There is no data before this\n");
	}
	else if (head->next==head)
	{
		printf("There is no data after this\n");
	}
	else if (head->next->data==before)
	{
		tmp=head;
		b=head;
		head=tmp->next;
		while (tmp->next!=b)
		{
			tmp=tmp->next;
		}
		tmp->next=head;
		head->prev=tmp;
		free(b);
	}
	else
	{
		tmp=head;
		prev1=head;
		while (tmp->next->next != head && tmp->next->data != before)
		{
			prev1 = tmp;
			tmp = tmp->next;
		}

		if (tmp->next->data != before)
		{
			printf("%d element is not present in any of the nodes! Sorry !\n",before);
		}
		else
		{
			prev1->next = tmp->next;
			tmp->next->prev=prev1;
			free(tmp);
		}	
	}
}


node * Del_After(int after)
{
	node * tmp;
	node * prev1;
	if (head==NULL)
	{
		printf("The linked list is already empty\n");
		return head;
	}
	else if (head->data==after)
	{
		if (head->next==head)
		{
			printf("There is no data after this\n");
		}
		else
		{
			tmp=head;
			tmp=tmp->next;
			if (tmp->next==head)
			{
				head->next==tmp->next;
				free(tmp);
			}
			else
			{
				head->next=tmp->next;
				tmp->next->prev=head;
				free(tmp);
			}	
		}
	}
	else
	{
		tmp=head;
		while (tmp->next!=head && tmp->data!=after)
		{
			tmp=tmp->next;
		} 	
		if (tmp->data!=after)
		{
			printf("%d element is not present in any of the nodes! Sorry!\n",after);
		}
		else
		{
			if (tmp->next==head)
			{
				printf("There is no data after this!\n");	
			}
			else
			{
				prev1=tmp;
				tmp=tmp->next;
				prev1->next=tmp->next;
				tmp->next->prev=prev1;
				free(tmp);
			}
		}
	}
}

node * Del_Nth_Position(int position)
{
	int c = 1;
	node * tmp;
	node * prev1;
	node * b;
	if (head==NULL)
	{
		printf("The linked list is already empty\n");
		return head;
	}
	if (position == 1)
	{
		if (head->next==head)
		{
			free(head);
			head=NULL;
		}
		else
		{
			tmp = head;
			b=head;
			head = tmp->next;
			while (tmp->next!=b)
			{
				tmp=tmp->next;
			}
			tmp->next=head;
			head->prev=tmp;
			free(b);
		}
	}
	else
	{
		prev1=head;
		tmp=head;
		while (tmp->next != head && c<position)
		{
			c++;
			prev1 = tmp;
			tmp = tmp->next;
		}
		if (c != position)
		{
			printf("No nodes are present at %dth position in the linked list! Sorry!\n",position);
		}
		else
		{
			if (tmp->next==head)
			{
				prev1->next=head;
				head->prev=prev1;
				free(tmp);
			}
			else
			{
				prev1->next = tmp->next;
				tmp->next->prev=prev1;
				free(tmp);
			}
		}
	}
}

node * Del_Nth_Data(int key)
{
	node * tmp;
	node * prev1;
	node * b;
	if (head==NULL)
	{
		printf("The linked list is already empty\n");
		return head;
	}
	if (head->data == key)
	{
		if (head->next==head)
		{
			free(head);
			head=NULL;
		}
		else
		{
			tmp = head;
			b=head;
			head = tmp->next;
			while (tmp->next!=b)
			{
				tmp=tmp->next;
			}
			tmp->next=head;
			head->prev=tmp;
			free(b);
		}
	}
	else
	{
		prev1=head;
		tmp=head;
		while (tmp->next != head && tmp->data != key)
		{
			prev1 = tmp;
			tmp = tmp->next;
		}
		if (tmp->data != key)
		{
			printf("%d element is not present in any of the nodes! Sorry !\n",key);
		}
		else
		{
			if (tmp->next==head)
			{
				prev1->next=head;
				head->prev=prev1;
				free(tmp);
			}
			else
			{
				prev1->next = tmp->next;
				tmp->next->prev=prev1;
				free(tmp);
			}
		}	
	}
}

node * Reverse()
{
	if (head==NULL)
	{
		printf("The linked List is empty\n");
		return head;
	}
	else if (head->next==NULL)
	{
		printf("The list has only one node\n");
		return head->next;
	}
	else
	{
		node * temp = NULL;
    	node * current = head;
 
    	do
		{
	        temp = current->prev;
	        current->prev = current->next;
	        current->next = temp;
	        current = current->prev;
    	} while (current!=head);
 
		if (temp != NULL)
        head = temp->prev;
	}	
}

void Display_List()
{
	node * tmp;
	tmp=head;
	do
	{
		printf("%d ",tmp->data);
		tmp=tmp->next;
	} while (tmp!=head);
	printf("\n");
}

int main()
{
	int i,j,l,d,cre_choice,del_choice,after,before,position,key,counter;
	while(1)
	{
		printf("------USER MENU------\n");
		printf("1. Insert from the beginning\n");
		printf("2. Insert from the end\n");
		printf("3. Insert after some element\n");
		printf("4. Insert before some element \n");
		printf("5. Insert at nth position in the list\n");
		printf("6. Delete menu\n");
		printf("7. Reversing the list\n");
		printf("8. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&cre_choice);
		
		if (cre_choice == 1)
		{
				printf("Enter the length of the list: ");
	        	scanf("%d",&l);
	        	for(i = 0; i<l; i++)
	        	{
		        	printf("Enter the data: ");
				scanf("%d",&d);
				Insert_at_beginning(d);
				}
			printf("List is created\n");
			Display_List();
			
		}
		
		else if (cre_choice == 2)		
	    {	
	    	printf("Enter the length of the list: ");
		    scanf("%d",&l);
	        for(i = 0; i<l; i++)
	        {
		        printf("Enter the data: ");
				scanf("%d",&d);
				Insert_at_end(d);
			}
			printf("List is created\n");
			Display_List();
			
		}
				
		else if (cre_choice == 3)
		{
			printf("Enter the data: ");
			scanf("%d",&d);
			printf("Enter the value after: ");
			scanf("%d",&after);
			if (Insert_After(d,after)!=NULL)
			{
				Display_List();
			}		
		}
		
		else if (cre_choice == 4)
		{
			printf("Enter the data: ");
			scanf("%d",&d);
			printf("Enter the value before: ");
			scanf("%d",&before);
			if (Insert_Before(d,before)!=NULL)
			{
				Display_List();
			}
			
		}

		else if (cre_choice == 5)
		{
			printf("Enter the data: ");
			scanf("%d",&d);
			printf("Enter the position: ");
			scanf("%d",&position);
			if (Insert_Nth_Position(d,position)!=NULL)
			{
				Display_List();
			}
		
		}

		else if (cre_choice == 6)
		{
			while(1)
			{
				printf("------Delete Menu------\n");
				printf("1. From the beginning\n");
				printf("2. From the end\n");
				printf("3. Delete after\n");
				printf("4. Delete before\n");
				printf("5. Delete at nth position\n");
				printf("6. Delete nth data\n");
				printf("7. Exit\n");
				printf("Enter your choice: ");
				scanf("%d",&del_choice);
				if (del_choice == 1)
				{
					
					if (Del_Start()!=NULL)
					{
						Display_List();
					}
				}
				
				else if (del_choice == 2)
				{
					
					if (Del_End()!=NULL)
					{
						Display_List();
					}			
				}

				else if (del_choice == 3)
				{
					printf("Enter after which data you want to delete: ");
					scanf("%d",&after);
					
					if (Del_After(after)!=NULL)
					{
						Display_List();
					}
					
				}
				
				else if (del_choice == 4)
				{
					printf("Enter before which data you want to dalete: ");
					scanf("%d",&before);
					
					if (Del_Before(before)!=NULL)
					{
						Display_List();
					}
					
				}
				

				else if (del_choice == 5)
				{
					printf("Enter the position at which you want to delete: ");
					scanf("%d",&position);
					
					if (Del_Nth_Position(position)!=NULL)
					{
						Display_List();
					}
					
				}
				
				else if (del_choice == 6)
				{
					printf("Enter the data which you want to delete: ");
					scanf("%d",&key);
			
					if (Del_Nth_Data(key)!=NULL)
					{
						Display_List();
					}
					
				}
				
				else if (del_choice == 7)
				{
					printf("Exiting delete menu\n");
					break;
				}
				
				else
				{
					printf("Invalid choice\n");
				}
			}
		}
		else if (cre_choice == 7)
		{					
			if (Reverse()!=NULL)
			{
				Display_List();
			}			
		}
		else if (cre_choice == 8)
		{
			printf("End\n");
			break;
		}
		else
		{
			printf("Invalid choice\n");
		}
	}		
return 0;
}
