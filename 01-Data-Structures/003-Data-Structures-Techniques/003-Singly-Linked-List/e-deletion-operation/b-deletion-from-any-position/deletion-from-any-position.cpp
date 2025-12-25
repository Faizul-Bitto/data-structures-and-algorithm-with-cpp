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

void insertValueAtTail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;

        return;
    }

    tail->next = newNode;
    tail = newNode;
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

void deleteFromAnyPosition(Node *&head, int index)
{
    Node *temp = head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }

        insertValueAtTail(head, tail, value);
    }

    deleteFromAnyPosition(head, 2);
    printLinkedList(head);

    return 0;
}