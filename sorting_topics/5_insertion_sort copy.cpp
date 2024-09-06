#include<iostream>
using namespace std;


void insertionSort(int arr[], int n){

    
    // 100, 90, 60, 50, 30
    int value, j;

    for (int i = 1; i < n; i++) {

        value = arr[i]; // 60
        j = i - 1; // 90

        while (j >= 0 && arr[j] > value)
        {

            // shifting
            arr[j + 1] = arr[j];
            j = j -1;
                
        }

        arr[j + 1] = value;
      
    }



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
    insertionSort(arr, n);
    cout << "Array after Sort" << endl;
    printArr(arr, n);   

}

