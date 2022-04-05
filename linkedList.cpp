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
        LinkedList() {
            root = NULL;
        }

        void insert(const int& val) {
            root = insertNode(root, value)
        }

        Node* insertNode(Node* node, const int& val) {
            Node* newNode = new Node(val);
            if(!node) {
                return newNode;
            } else {
                root->next = newNode;
            }
            return root;
        }
}

int main() {

}