// // // // #include <iostream>
// // // // #include <vector>
// // // // using namespace std;

// // // // struct node {
// // // //     int data;
// // // //     node* next;

// // // //     node(int info, node* next1) {
// // // //         data = info;
// // // //         next = next1;
// // // //     }
// // // // };

// // // // node* convertNode(vector<int> arr) {
// // // //     node* head = new node(arr[0], nullptr);
// // // //     node* mover = head;

// // // //     for (int i = 1; i < arr.size(); i++) {
// // // //         node* temp = new node(arr[i], nullptr);
// // // //         mover->next = temp;
// // // //         mover = temp;
// // // //     }

// // // //     return head;
// // // // }

// // // // int main() {
// // // //     vector<int> arr = {0, 1, 2, 3, 4};

// // // //     node* head = convertNode(arr);

// // // //     // Traverse and print
// // // //     node* temp = head;

// // // //     while (temp != nullptr) {
// // // //         cout << temp->data << " ";
// // // //         temp = temp->next;
// // // //     }

// // // //     return 0;
// // // // }

// // // #include <iostream>
// // // #include <vector>
// // // using namespace std;

// // // struct node {
// // //     int data;
// // //     node* next;

// // //     node(int info, node* next1) {
// // //         data = info;
// // //         next = next1;
// // //     }
// // // };

// // // // Array -> Linked List
// // // node* convertNode(vector<int> arr) {
// // //     node* head = new node(arr[0], nullptr);
// // //     node* mover = head;

// // //     for (int i = 1; i < arr.size(); i++) {
// // //         node* temp = new node(arr[i], nullptr);
// // //         mover->next = temp;
// // //         mover = temp;
// // //     }

// // //     return head;
// // // }

// // // // Traversal
// // // void traverse(node* head) {
// // //     node* temp = head;

// // //     while (temp != nullptr) {
// // //         cout << temp->data << " ";
// // //         temp = temp->next;
// // //     }
// // //     cout << endl;
// // // }

// // // // Delete Head Node
// // // node* deleteHead(node* head) {

// // //     if (head == nullptr)
// // //         return nullptr;

// // //     node* temp = head;
// // //     head = head->next;

// // //     delete temp;

// // //     return head;
// // // }

// // // int main() {

// // //     vector<int> arr = {0, 1, 2, 3, 4};

// // //     node* head = convertNode(arr);

// // //     cout << "Before Deletion: ";
// // //     traverse(head);

// // //     head = deleteHead(head);

// // //     cout << "After Deletion: ";
// // //     traverse(head);

// // //     return 0;
// // // }
// // #include <iostream>
// // #include <vector>
// // using namespace std;

// // struct node {
// //     int data;
// //     node* next;

// //     node(int info, node* next1) {
// //         data = info;
// //         next = next1;
// //     }
// // };

// // // Array -> Linked List
// // node* convertNode(vector<int> arr) {

// //     node* head = new node(arr[0], nullptr);
// //     node* mover = head;

// //     for (int i = 1; i < arr.size(); i++) {
// //         node* temp = new node(arr[i], nullptr);
// //         mover->next = temp;
// //         mover = temp;
// //     }

// //     return head;
// // }

// // // Traversal
// // void traverse(node* head) {

// //     node* temp = head;

// //     while (temp != nullptr) {
// //         cout << temp->data << " ";
// //         temp = temp->next;
// //     }

// //     cout << endl;
// // }

// // // Delete Last Node
// // node* deleteTail(node* head) {

// //     // Empty Linked List
// //     if (head == nullptr)
// //         return nullptr;

// //     // Only one node
// //     if (head->next == nullptr) {
// //         delete head;
// //         return nullptr;
// //     }

// //     node* temp = head;

// //     while (temp->next->next != nullptr) {
// //         temp = temp->next;
// //     }

// //     delete temp->next;
// //     temp->next = nullptr;

// //     return head;
// // }

// // int main() {

// //     vector<int> arr = {0, 1, 2, 3, 4};

// //     node* head = convertNode(arr);

// //     cout << "Before Deletion: ";
// //     traverse(head);

// //     head = deleteTail(head);

// //     cout << "After Deletion: ";
// //     traverse(head);

// //     return 0;
// // }
// #include <iostream>
// #include <vector>
// using namespace std;

// struct node {
//     int data;
//     node* next;

//     node(int info, node* next1) {
//         data = info;
//         next = next1;
//     }
// };

// // Array -> Linked List
// node* convertNode(vector<int> arr) {

//     if (arr.size() == 0)
//         return nullptr;

//     node* head = new node(arr[0], nullptr);
//     node* mover = head;

//     for (int i = 1; i < arr.size(); i++) {
//         node* temp = new node(arr[i], nullptr);
//         mover->next = temp;
//         mover = temp;
//     }

//     return head;
// }

// // Traversal
// void traverse(node* head) {

//     node* temp = head;

//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     cout << endl;
// }

// // Delete Kth Node
// node* deleteK(node* head, int k) {

//     // Empty Linked List
//     if (head == nullptr)
//         return nullptr;

//     // Delete Head
//     if (k == 1) {
//         node* temp = head;
//         head = head->next;
//         delete temp;
//         return head;
//     }

//     node* temp = head;
//     node* prev = nullptr;
//     int cnt = 1;

//     while (temp != nullptr) {

//         if (cnt == k) {
//             prev->next = temp->next;
//             delete temp;
//             break;
//         }

//         prev = temp;
//         temp = temp->next;
//         cnt++;
//     }

//     return head;
// }

// int main() {

//     vector<int> arr = {0, 1, 2, 3, 4};

//     node* head = convertNode(arr);

//     cout << "Before Deletion: ";
//     traverse(head);

//     int k;
//     cout << "Enter Position to Delete: ";
//     cin >> k;

//     head = deleteK(head, k);

//     cout << "After Deletion: ";
//     traverse(head);

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

Node* deleteHead(Node* head)
{
    // Empty list
    if (head == NULL)
        return NULL;

    // Only one node
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }

    Node* temp = head;
    head = head->next;
    head->prev = NULL;

    delete temp;

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
    // 10 <-> 20 <-> 30
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    cout << "Before Deletion: ";
    printList(head);

    head = deleteHead(head);

    cout << "After Deletion: ";
    printList(head);

    return 0;
}