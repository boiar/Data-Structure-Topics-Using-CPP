#include<iostream>
using namespace std;

class arrayList {
    int*arr;   // ptr of array 
    int maxSize;
    int length;

public:

    arrayList(int size = 10 ){
        if ( size < 0)
            maxSize = 10;
        else 
            maxSize = size;
        
        length = 0;

        arr = new int[maxSize];   
    }

    bool isEmpty(){
        return length == 0; 
    }


    bool isFull(){
        return length == maxSize; 
    }

    int getSize(){
        return length;
    }

    void print(){
        for (size_t i = 0; i < length; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
        
    } 

    void insertAtPos(int pos, int element){
        if(isFull()){
            cout << "List Full";
        } else if(pos < 0 || pos > length){
            cout << "Out of range";
        } else {
            for ( int i = length; i > pos; i--)
            {
                arr[i] = arr[i-1];
            }

            arr[pos] = element;
            length++;
            
        }

    }



    void removeAtPos(int pos){
        if(isEmpty()){
            cout << "List Empty !";
        } else if(pos < 0 || pos > length){
            cout << "Out of range !";
        } else {
            for ( size_t i = pos; i < length; i++)
            {
                arr[i] = arr[i+1];
            }

            length--;
        }

    }


    void insertAtEnd(int element){
        if (isFull()) {
            cout << "List Full !";
        } else {
            arr[length] = element;
        }

        length++;
        
    }

    int search (int element){
        if(isEmpty()){
            cout << "List Empty !";
        } else {
            for ( size_t i = 0; i < length; i++)
            {
                if(arr[i] == element)
                    return 1;
            }
            return -1;
        }
    }


    void insertNoDuplicate(int element){
        if (search(element) == -1)
        {
            insertAtEnd(element);
            
        } else {
            cout << "The elemnent is there !";
        }
        
    }

    void updateAt(int pos, int element){

        if (pos < 0 || pos > length)
        {
            cout << "Out of range !";
        } else {
            arr[pos] = element;
        }
        
    }

    int getElement(int pos){
        if (pos < 0 || pos > length){
            cout << "Out of range !";
        } else {
            return arr[pos];
        }
        
    }


};
 


int main(){
    arrayList ar(100);
    ar.insertAtPos(0, 10);
    ar.insertAtPos(1, 20);
    ar.insertAtEnd(30);
    ar.insertNoDuplicate(30);
    cout << endl;
    ar.updateAt(0, 5);
    cout << ar.getElement(1);
    cout << endl;
    ar.print();
    //ar.insertNoDuplicate(30);
   

}

