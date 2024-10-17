#include<iostream>
using namespace std;

class linkedList {
    struct Node
    {
       int item; 
       Node*next; // Pointer to the next node in the linked list.

    };
    
    Node*first;
    Node*last;
    int length;


public:
    linkedList() {
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
            // the new node is the last node 
            first = last = newNode;
            newNode->next = NULL;
        } else {
            newNode->next = first;
            first = newNode;
        }

        length++;
        
    }

    void insertLast(int element ){

        Node*newNode = new Node;
        newNode->item = element;

        if (isEmpty())
        {
            first = last = newNode;
            newNode->next = NULL;
        } else {
            last->next = newNode;
            newNode->next = NULL;
            last = newNode;
        }

        length++;
    }

    void insertAtPos(int pos, int element){
        if (pos < 0 || pos > length ) {
            cout << "Out of Range";
        } else {
            Node*newNode  = new Node;
            newNode->item = element;

            if(pos == 0){
                insertFirst(element);

            } else if ( pos == length) {
                insertLast(element);

            } else {
                Node * Cur = first;

                for (size_t i = 1; i < pos; i++)
                {
                    Cur = Cur->next;
                }

                newNode->next = Cur->next; 
                Cur->next = newNode;
                length++;

            }

        }
    } 


    void print(){

        Node*Cur = first;

        while (Cur !=NULL)
        {
          cout << Cur->item << " ";
          Cur = Cur->next;
        }
        



    }


};
 


int main(){
   
   linkedList l;
   l.insertFirst(10);
   l.insertLast(20);
   l.insertFirst(5);
   l.insertLast(30);
   l.insertAtPos(2, 15);
   l.print();
   



}

