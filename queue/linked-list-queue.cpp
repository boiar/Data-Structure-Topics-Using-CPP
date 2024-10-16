#include <iostream>
#include <cassert>
using namespace std;


class linkedListQueue {

private: 
    struct Node
    {
        int item;
        Node *next;     // store address of next node 
    };

    Node*frontPtr;
    Node*rearPtr;
    int length;     // current queue length 


public: 
    linkedListQueue() {
        frontPtr = rearPtr = NULL;
        length = 0;
    }


    bool isEmpty(){
        return length == 0;
    }


    void enqueue(int element){
        if (isEmpty())
        {
            frontPtr = new Node;
            frontPtr->item = element;
            frontPtr->next = NULL;
            rearPtr = frontPtr;
        } else {

            Node *newPtr = new Node;
            newPtr->item = element;
            newPtr->next = NULL;

            // link between last element in queue and current node 
            rearPtr->next = newPtr;
            rearPtr = newPtr;
        }

        length++;
        
    }


    void dequeue(){
        if (isEmpty())
        {
            cout << "Empty Queue, Cannot Dequeue !";
        } else{
            Node *tempPtr = frontPtr;
            
            if (frontPtr == rearPtr)
            {
                frontPtr = NULL;
                rearPtr = NULL;
                
            } else{
                // Move the front pointer to the next node
                frontPtr = frontPtr->next;
                tempPtr->next = NULL;
                delete tempPtr;
            }
            length--;
        }

        
    }

    int getFront(){
        assert(!isEmpty());
        return frontPtr->item;
    }

    int getRear(){
        assert(!isEmpty());
        return rearPtr->item;
    }
    

    int getSize(){
        return length;
    }

};


int main(){
    linkedListQueue q1;

    q1.enqueue(100);
    q1.enqueue(200);
    q1.enqueue(300);
    q1.enqueue(400);

    cout << q1.getFront() << endl;
    cout << q1.getRear() << endl;

}