#include <iostream>
using namespace std;


class LinkedList {

};

class Node {
        public:
        int data;
        Node *next;

        Node() {
                this->data = -1;
                this->next = NULL;
        }

        Node(int data) {
                this->data = data;
                this->next = NULL;
        }

        Node* newNode(int data, Node* p) {
                Node* node = new Node(data, p);
                return node;
        }
};

int main() {
        Node n1;
        cout << n1.data << " " << n1.next << endl;
        return 0;
}
        

