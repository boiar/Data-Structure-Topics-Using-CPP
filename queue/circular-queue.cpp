#include <iostream>
using namespace std;

const int max_length =  100;  // queue max

class queue {
private:
    int arr[max_length];
    int front;
    int rear;
    int length; // Current number of elements in the queue

public:

    // Constructor to initialize the queue
    queue(){
        front = 0;
        rear = max_length - 1;
        length = 0;
    }

    bool isEmpty(){
        return length == 0;
    }

    bool isFull(){
        return length == max_length;
    }

    

    // Add an element to the queue
    void enqueue(int element){

        if (isFull()){
            cout << "Queue full can't Enqueue !";
        }
        else{
            rear = (rear+1) % max_length;
            arr[rear] = element;
            length++;
        }

    }

    // Remove an element from the queue
    void dequeue() {
        if(isEmpty()){
            cout<<"Queue empty can't dequeue !";
        }
        else {

            front= (front + 1) % max_length;
            --length;
        }
    }

    // return queue front  
    int getFornt(){

        if(isEmpty()){
            cout<<"Queue empty !";
        }
        else {
           return arr[front];
        }
    }

    // return queue rear  
    int getRear(){

        if(isEmpty()){
            cout<<"Queue empty !";
        }
        else {
           return arr[rear];
        }
    }

    // STOP HERE TODO
    void printQueue() {
    if (!isEmpty()) {
        int i = front;
        int count = 0;
        while (count < length) {
            cout << arr[i];
            if (count < length - 1) {
                cout << ", ";
            }
            i = (i + 1) % max_length;
            count++;
        }
        cout << endl;
    } else {
        cout << "Queue is empty!" << endl;
    }
}

};


int main(){
    queue q1;

    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.dequeue();
    cout << q1.getFornt() << "\n";
    cout << q1.getRear() << "\n";
    q1.printQueue();

    

}