#include <iostream>
#include <vector>
using namespace std;

struct node {
    int data;
    node* next;

    node(int info, node* next1) {
        data = info;
        next = next1;
    }
};

node* convertNode(vector<int> arr) {
    node* head = new node(arr[0], nullptr);
    node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        node* temp = new node(arr[i], nullptr);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

int main() {
    vector<int> arr = {0, 1, 2, 3, 4};

    node* head = convertNode(arr);

    // Traverse and print
    node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}