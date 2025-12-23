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

void insertValueAtAnyPosition(Node *&head, int index, int value)
{
    Node *newNode = new Node(value);

    Node *temp = head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->next = tail;

    insertValueAtAnyPosition(head, 2, 40);
    insertValueAtAnyPosition(head, 2, 50);

    printLinkedList(head);

    return 0;
}