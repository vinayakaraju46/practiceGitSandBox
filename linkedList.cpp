#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(const int& val) {
            data = val;
            next = NULL;
        }
};

class LinkedList {
    public:
        Node* root;
        Node* tail;
        LinkedList() {
            root = NULL;
            tail = NULL;
        }

        void insert(const int& val) {
            root = insertNode(root, value)
        }

        Node* insertNode(Node* node, const int& val) {
            if(root == NULL && tail == NULL) {
                return new Node(val);
            } else {
                tail->next = new Node(val);
            }
            return root;
        }
}

int main() {

}