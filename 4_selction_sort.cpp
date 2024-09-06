#include<iostream>
using namespace std;


void selectionSort(int arr[], int n){

    int counter = 0;
    int minIdx;

    for (int i = 0; i < n -1 ; i++) {

        minIdx = i;

        
        for (int j = i+1; j < n ; j++) {
            if (arr[j] < arr[i]) {
                minIdx = j;
                swap(arr[minIdx], arr[i]);
            }
            counter++;
        }

        
    }

    cout << "Num of Rounds => " << counter << endl;
}

// void swap(int&x, int&y){
//     int temp = x;
//     x = y;
//     y = temp;
// }



void printArr(int arr[], int n){

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[] = {9,10,11,12,13,13,15};
    int n = sizeof(arr)/ sizeof(arr[0]);
 

   
    cout << "Array before Sort" << endl;
    printArr(arr, n);
    selectionSort(arr, n);
    cout << "Array after Sort" << endl;
    printArr(arr, n);   

}

