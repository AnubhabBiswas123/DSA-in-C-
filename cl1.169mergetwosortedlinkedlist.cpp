#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node(T data) {
        next = NULL;
        this->data = data;
    }

    ~Node() {
        if (next != NULL) {
            delete next;
        }
    }
};

Node<int>* solve(Node<int>* first, Node<int>* second) {
    Node<int>* curr1 = first;
    Node<int>* next1 = curr1->next;
    Node<int>* curr2 = second;
    Node<int>* next2;
    if (next1 == NULL) {
        curr1->next = curr2;
        return first;
    }
    while (next1 != NULL && curr2 != NULL) {
        if (curr2->data >= curr1->data && curr2->data <= next1->data) {
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            curr1 = curr2;
            curr2 = next2;
        } else {
            curr1 = next1;
            next1 = next1->next;
            if (next1 == NULL) {
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second) {
    if (first == NULL)
        return second;
    if (second == NULL)
        return first;
    if (first->data <= second->data)
        return solve(first, second);
    else
        return solve(second, first);
}

void insertattail(Node<int>*& tail, int data) {
    Node<int>* temp = new Node<int>(data);
    tail->next = temp;
    tail = temp;
}

void traverse(Node<int>* head) {
    Node<int>* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node<int>* head1 = NULL;  // Initialize head1 to NULL
    Node<int>* head2 = NULL;  // Initialize head2 to NULL

    int n, data;
    cout << "The first list:" << endl;
    cout << "Enter the no. of nodes you want to create: ";
    cin >> n;
    cout << endl;
    if (n != 0) {
        cout << "Enter the data of the head node: ";
        cin >> data;
        head1 = new Node<int>(data);  // Use the existing head1 variable
        Node<int>* tail1 = head1;
        for (int i = 2; i <= n; i++) {
            cout << "Enter the data of the " << i << " th node: ";
            cin >> data;
            insertattail(tail1, data);
        }
    }

    cout << "The second list:" << endl;
    cout << "Enter the no. of nodes you want to create: ";
    cin >> n;
    cout << endl;
    if (n != 0) {
        cout << "Enter the data of the head node: ";
        cin >> data;
        head2 = new Node<int>(data);  // Use the existing head2 variable
        Node<int>* tail2 = head2;
        for (int i = 2; i <= n; i++) {
            cout << "Enter the data of the " << i << " th node: ";
            cin >> data;
            insertattail(tail2, data);
        }
    }

    traverse(head1);
    traverse(head2);

    head1 = sortTwoLists(head1, head2);
    cout << "The sorted list is: ";
    traverse(head1);

    return 0;
}

