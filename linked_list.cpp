// // // // // // // // #include <iostream>
// // // // // // // // #include <vector>
// // // // // // // // using namespace std;

// // // // // // // // struct node {
// // // // // // // //     int data;
// // // // // // // //     node* next;

// // // // // // // //     node(int info, node* next1) {
// // // // // // // //         data = info;
// // // // // // // //         next = next1;
// // // // // // // //     }
// // // // // // // // };

// // // // // // // // node* convertNode(vector<int> arr) {
// // // // // // // //     node* head = new node(arr[0], nullptr);
// // // // // // // //     node* mover = head;

// // // // // // // //     for (int i = 1; i < arr.size(); i++) {
// // // // // // // //         node* temp = new node(arr[i], nullptr);
// // // // // // // //         mover->next = temp;
// // // // // // // //         mover = temp;
// // // // // // // //     }

// // // // // // // //     return head;
// // // // // // // // }

// // // // // // // // int main() {
// // // // // // // //     vector<int> arr = {0, 1, 2, 3, 4};

// // // // // // // //     node* head = convertNode(arr);

// // // // // // // //     // Traverse and print
// // // // // // // //     node* temp = head;

// // // // // // // //     while (temp != nullptr) {
// // // // // // // //         cout << temp->data << " ";
// // // // // // // //         temp = temp->next;
// // // // // // // //     }

// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // #include <iostream>
// // // // // // // #include <vector>
// // // // // // // using namespace std;

// // // // // // // struct node {
// // // // // // //     int data;
// // // // // // //     node* next;

// // // // // // //     node(int info, node* next1) {
// // // // // // //         data = info;
// // // // // // //         next = next1;
// // // // // // //     }
// // // // // // // };

// // // // // // // // Array -> Linked List
// // // // // // // node* convertNode(vector<int> arr) {
// // // // // // //     node* head = new node(arr[0], nullptr);
// // // // // // //     node* mover = head;

// // // // // // //     for (int i = 1; i < arr.size(); i++) {
// // // // // // //         node* temp = new node(arr[i], nullptr);
// // // // // // //         mover->next = temp;
// // // // // // //         mover = temp;
// // // // // // //     }

// // // // // // //     return head;
// // // // // // // }

// // // // // // // // Traversal
// // // // // // // void traverse(node* head) {
// // // // // // //     node* temp = head;

// // // // // // //     while (temp != nullptr) {
// // // // // // //         cout << temp->data << " ";
// // // // // // //         temp = temp->next;
// // // // // // //     }
// // // // // // //     cout << endl;
// // // // // // // }

// // // // // // // // Delete Head Node
// // // // // // // node* deleteHead(node* head) {

// // // // // // //     if (head == nullptr)
// // // // // // //         return nullptr;

// // // // // // //     node* temp = head;
// // // // // // //     head = head->next;

// // // // // // //     delete temp;

// // // // // // //     return head;
// // // // // // // }

// // // // // // // int main() {

// // // // // // //     vector<int> arr = {0, 1, 2, 3, 4};

// // // // // // //     node* head = convertNode(arr);

// // // // // // //     cout << "Before Deletion: ";
// // // // // // //     traverse(head);

// // // // // // //     head = deleteHead(head);

// // // // // // //     cout << "After Deletion: ";
// // // // // // //     traverse(head);

// // // // // // //     return 0;
// // // // // // // }
// // // // // // #include <iostream>
// // // // // // #include <vector>
// // // // // // using namespace std;

// // // // // // struct node {
// // // // // //     int data;
// // // // // //     node* next;

// // // // // //     node(int info, node* next1) {
// // // // // //         data = info;
// // // // // //         next = next1;
// // // // // //     }
// // // // // // };

// // // // // // // Array -> Linked List
// // // // // // node* convertNode(vector<int> arr) {

// // // // // //     node* head = new node(arr[0], nullptr);
// // // // // //     node* mover = head;

// // // // // //     for (int i = 1; i < arr.size(); i++) {
// // // // // //         node* temp = new node(arr[i], nullptr);
// // // // // //         mover->next = temp;
// // // // // //         mover = temp;
// // // // // //     }

// // // // // //     return head;
// // // // // // }

// // // // // // // Traversal
// // // // // // void traverse(node* head) {

// // // // // //     node* temp = head;

// // // // // //     while (temp != nullptr) {
// // // // // //         cout << temp->data << " ";
// // // // // //         temp = temp->next;
// // // // // //     }

// // // // // //     cout << endl;
// // // // // // }

// // // // // // // Delete Last Node
// // // // // // node* deleteTail(node* head) {

// // // // // //     // Empty Linked List
// // // // // //     if (head == nullptr)
// // // // // //         return nullptr;

// // // // // //     // Only one node
// // // // // //     if (head->next == nullptr) {
// // // // // //         delete head;
// // // // // //         return nullptr;
// // // // // //     }

// // // // // //     node* temp = head;

// // // // // //     while (temp->next->next != nullptr) {
// // // // // //         temp = temp->next;
// // // // // //     }

// // // // // //     delete temp->next;
// // // // // //     temp->next = nullptr;

// // // // // //     return head;
// // // // // // }

// // // // // // int main() {

// // // // // //     vector<int> arr = {0, 1, 2, 3, 4};

// // // // // //     node* head = convertNode(arr);

// // // // // //     cout << "Before Deletion: ";
// // // // // //     traverse(head);

// // // // // //     head = deleteTail(head);

// // // // // //     cout << "After Deletion: ";
// // // // // //     traverse(head);

// // // // // //     return 0;
// // // // // // }
// // // // // #include <iostream>
// // // // // #include <vector>
// // // // // using namespace std;

// // // // // struct node {
// // // // //     int data;
// // // // //     node* next;

// // // // //     node(int info, node* next1) {
// // // // //         data = info;
// // // // //         next = next1;
// // // // //     }
// // // // // };

// // // // // // Array -> Linked List
// // // // // node* convertNode(vector<int> arr) {

// // // // //     if (arr.size() == 0)
// // // // //         return nullptr;

// // // // //     node* head = new node(arr[0], nullptr);
// // // // //     node* mover = head;

// // // // //     for (int i = 1; i < arr.size(); i++) {
// // // // //         node* temp = new node(arr[i], nullptr);
// // // // //         mover->next = temp;
// // // // //         mover = temp;
// // // // //     }

// // // // //     return head;
// // // // // }

// // // // // // Traversal
// // // // // void traverse(node* head) {

// // // // //     node* temp = head;

// // // // //     while (temp != nullptr) {
// // // // //         cout << temp->data << " ";
// // // // //         temp = temp->next;
// // // // //     }

// // // // //     cout << endl;
// // // // // }

// // // // // // Delete Kth Node
// // // // // node* deleteK(node* head, int k) {

// // // // //     // Empty Linked List
// // // // //     if (head == nullptr)
// // // // //         return nullptr;

// // // // //     // Delete Head
// // // // //     if (k == 1) {
// // // // //         node* temp = head;
// // // // //         head = head->next;
// // // // //         delete temp;
// // // // //         return head;
// // // // //     }

// // // // //     node* temp = head;
// // // // //     node* prev = nullptr;
// // // // //     int cnt = 1;

// // // // //     while (temp != nullptr) {

// // // // //         if (cnt == k) {
// // // // //             prev->next = temp->next;
// // // // //             delete temp;
// // // // //             break;
// // // // //         }

// // // // //         prev = temp;
// // // // //         temp = temp->next;
// // // // //         cnt++;
// // // // //     }

// // // // //     return head;
// // // // // }

// // // // // int main() {

// // // // //     vector<int> arr = {0, 1, 2, 3, 4};

// // // // //     node* head = convertNode(arr);

// // // // //     cout << "Before Deletion: ";
// // // // //     traverse(head);

// // // // //     int k;
// // // // //     cout << "Enter Position to Delete: ";
// // // // //     cin >> k;

// // // // //     head = deleteK(head, k);

// // // // //     cout << "After Deletion: ";
// // // // //     traverse(head);

// // // // //     return 0;
// // // // // }
// // // // #include <iostream>
// // // // using namespace std;

// // // // struct Node
// // // // {
// // // //     int data;
// // // //     Node* prev;
// // // //     Node* next;

// // // //     Node(int val)
// // // //     {
// // // //         data = val;
// // // //         prev = NULL;
// // // //         next = NULL;
// // // //     }
// // // // };

// // // // Node* deleteHead(Node* head)
// // // // {
// // // //     // Empty list
// // // //     if (head == NULL)
// // // //         return NULL;

// // // //     // Only one node
// // // //     if (head->next == NULL)
// // // //     {
// // // //         delete head;
// // // //         return NULL;
// // // //     }

// // // //     Node* temp = head;
// // // //     head = head->next;
// // // //     head->prev = NULL;

// // // //     delete temp;

// // // //     return head;
// // // // }

// // // // void printList(Node* head)
// // // // {
// // // //     while (head != NULL)
// // // //     {
// // // //         cout << head->data << " ";
// // // //         head = head->next;
// // // //     }
// // // //     cout << endl;
// // // // }

// // // // int main()
// // // // {
// // // //     // 10 <-> 20 <-> 30
// // // //     Node* head = new Node(10);
// // // //     Node* second = new Node(20);
// // // //     Node* third = new Node(30);

// // // //     head->next = second;
// // // //     second->prev = head;
// // // //     second->next = third;
// // // //     third->prev = second;

// // // //     cout << "Before Deletion: ";
// // // //     printList(head);

// // // //     head = deleteHead(head);

// // // //     cout << "After Deletion: ";
// // // //     printList(head);

// // // //     return 0;
// // // // }
// // // Node* deleteTail(Node* head)
// // // {
// // //     // Empty list
// // //     if (head == NULL)
// // //         return NULL;

// // //     // Only one node
// // //     if (head->next == NULL)
// // //     {
// // //         delete head;
// // //         return NULL;
// // //     }

// // //     Node* temp = head;

// // //     // Last node tak jao
// // //     while (temp->next != NULL)
// // //     {
// // //         temp = temp->next;
// // //     }

// // //     // Second last node ko NULL se connect karo
// // //     temp->prev->next = NULL;

// // //     // Last node delete karo
// // //     delete temp;

// // //     return head;
// // // }
// // Node* deleteAtPosition(Node* head, int pos)
// // {
// //     // Empty list
// //     if (head == NULL)
// //         return NULL;

// //     // Head deletion
// //     if (pos == 1)
// //     {
// //         Node* temp = head;

// //         if (head->next == NULL)
// //         {
// //             delete head;
// //             return NULL;
// //         }

// //         head = head->next;
// //         head->prev = NULL;

// //         delete temp;
// //         return head;
// //     }

// //     Node* temp = head;

// //     // Position tak jao
// //     for (int i = 1; i < pos && temp != NULL; i++)
// //     {
// //         temp = temp->next;
// //     }

// //     // Invalid position
// //     if (temp == NULL)
// //         return head;

// //     // Tail deletion
// //     if (temp->next == NULL)
// //     {
// //         temp->prev->next = NULL;
// //         delete temp;
// //         return head;
// //     }

// //     // Middle deletion
// //     temp->prev->next = temp->next;
// //     temp->next->prev = temp->prev;

// //     delete temp;

// //     return head;
// // }
// #include <iostream>
// using namespace std;

// struct Node
// {
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int val)
//     {
//         data = val;
//         prev = NULL;
//         next = NULL;
//     }
// };

// Node* insertAtBeginning(Node* head, int data)
// {
//     Node* newNode = new Node(data);

//     if (head == NULL)
//         return newNode;

//     newNode->next = head;
//     head->prev = newNode;
//     head = newNode;

//     return head;
// }

// void printList(Node* head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     Node* head = NULL;

//     head = insertAtBeginning(head, 30);
//     head = insertAtBeginning(head, 20);
//     head = insertAtBeginning(head, 10);

//     printList(head);

//     return 0;
// }
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;

    Node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

Node* insertSecondLast(Node* head, int data)
{
    Node* newNode = new Node(data);

    if (head == NULL)
        return newNode;

    if (head->next == NULL)
    {
        head->next = newNode;
        newNode->prev = head;
        return head;
    }

    Node* temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;

    return head;
}

void printList(Node* head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(40);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    head = insertSecondLast(head, 30);

    printList(head);

    return 0;
}