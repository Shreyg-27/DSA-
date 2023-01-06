#include <iostream>

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
    if (head == NULL){
        return head ;
    }
   
    
    if (pos==0){
           
        return head->next ;
        }
     Node* temp = head;
    for (int i=0; temp!=NULL && i<pos-1;i++){
        temp=temp->next;
        
    }
    if (temp==NULL || temp-> next ==NULL){
        return head;
    }
    temp->next = temp->next->next;
    return head ;
   
    
    
}
