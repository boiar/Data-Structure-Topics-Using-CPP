#include<iostream>
using namespace std;
const int max_size =100;

class stack {

    int top;
    int items[max_size];

public:
    stack(){
        top = -1; // constractor
    }

    void push(int element){

        if (top >= max_size -1)
        {
            cout<<"Stack is full !!";
            // stack is full !!
        } else {
            top ++; 
            items[top] = element;
        }
    }

    bool isEmpty (){
        return top < 0;
    }

    void push(){

        if (isEmpty())
        {
            cout<<"Stack is empty !!";
        } else {
            top --;
        }
    }


};
 


int main(){
    

}

