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

void printReverse(Node *head)
{
    //Write your code here
    if (head==NULL || head->next==NULL){
        return head;
    }
    Node* small= printReverse(head->next);
    head=head->next;
    head=head->next;
    
    return small;
    
    
}