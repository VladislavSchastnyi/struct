include <iostream>
#include <string>

using namespace std;

struct  Node 
{
int data;
Node* next;
};

int main() 
{
Node* first = new Node {1, nullptr};
Node* second = new Node {2, nullptr};
first -> next = second;

Node* second = new Node {2, nullptr};
Node* first = new Node {1, second};

Node* first = nullptr;
Node* last = nullptr;
int n = 0;
        while (cin >> n) 
        {
        Node* node = new Node {n, nullptr};
        first = node;
                if (last != nullptr) last -> next = node;
                last=node;
        }
}

Node* curr = first;
do {
cout << curr -> data << " ";
curr = curr -> next;
} while ( curr-> next != nullptr);

