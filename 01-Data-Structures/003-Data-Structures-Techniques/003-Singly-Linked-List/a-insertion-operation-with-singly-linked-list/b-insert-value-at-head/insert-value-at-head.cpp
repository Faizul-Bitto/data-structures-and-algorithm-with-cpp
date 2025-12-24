#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insertValueAtHead(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void printLinkedList(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(40);
    Node *a = new Node(50);
    Node *b = new Node(60);

    head->next = a;
    a->next = b;

    insertValueAtHead(head, 30);
    insertValueAtHead(head, 20);
    insertValueAtHead(head, 10);
    printLinkedList(head);

    return 0;
}