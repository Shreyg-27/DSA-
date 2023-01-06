#include <iostream>
using namespace std;
 
class Node{
    public:
        int data;
        Node *next;
};
 

    void printMiddle(class Node *head){
        struct Node *slow = head;
        struct Node *fast = head;
  
        if (head!=NULL)
        {
            while (fast != NULL && fast->next != NULL)
            {
                fast = fast->next->next;
                slow = slow->next;
            }
            cout << slow->data << endl;
        }
    }

 
