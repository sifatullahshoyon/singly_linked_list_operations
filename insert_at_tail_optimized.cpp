#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    // Constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    
    tail->next = newNode;
    tail = tail->next;
}

void print_linked_list(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << endl;
        temp =temp->next;
    }
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = b;

    head->next = a;
    a->next = tail;

    insert_at_tail(head, tail, 40);
    insert_at_tail(head, tail, 60);
    insert_at_tail(head, tail, 80);
    // print linked list
    print_linked_list(head);
    cout << "Tail ->" << " " << tail->val;

    return 0;
}