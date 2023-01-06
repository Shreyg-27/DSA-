class Node
{
    public:
    int data;
    Node *next;
};

void insert_at_front(Node** head, int newdata)
{
   
    Node* newNode = new Node();
 
    newNode->data = newdata;
 
    newNode->next = (*head);

    (*head) = newNode;
}