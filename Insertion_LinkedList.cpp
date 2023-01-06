#include<iostream>
using namespace std;

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

Node* insertNode(Node *head, int i, int data) {
	// Write your code here
    
    if (head==NULL){
        return head;
    }
    // smalll calc
    Node* newNode=new Node(data);
    if (i==0){
        newNode->next=head;
        head=newNode;
        return head;
    }
    head->next= insertNode(head->next,i-1,data);
    return head;
}
