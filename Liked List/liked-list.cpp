#include<iostream>
using namespace std;

class likedList {
    struct Node
    {
       int item; 
       Node*next; // Pointer to the next node in the linked list.

    };
    
    Node*first;
    Node*last;
    int length;


public:
    likedList() {
        first = last = NULL;
        length = 0;
    }

    bool isEmpty(){
        return length == 0;
    }

    void insertFirst(int element ){

        Node*newNode = new Node;
        newNode->item = element;

        if (isEmpty())
        {
            first = last = newNode;
            newNode->next = NULL;
        } else {
            newNode->next = first;
            first = newNode;
        }

        length++;
        
    }

    void insertFirst(int element ){

        Node*newNode = new Node;
        newNode->item = element;

        if (isEmpty())
        {
            first = last = newNode;
            newNode->next = NULL;
        } else {
            newNode->next = first;

        }

        length++;
        
    }


};
 


int main(){
   

}

